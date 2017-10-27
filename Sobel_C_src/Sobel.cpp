
#include "Sobel.h"
#include "fxp_sqrt.h"


void upstrm2downstrm_input_array(hls::stream<input_array_of_pixels_t> &src, hls::stream<input_array_of_pixels_t_div> &dst){
    input_array_of_pixels_t in_val;
    input_array_of_pixels_t_div out_val;
  l1: for ( int i = 0 ; i < TILE_WIDTH+2 ; i++ ){
      in_val = src.read();
      l3 : for ( int n = 0 ; n < N ; n++ ){
#pragma HLS UNROLL
        l2: for ( int j = 0 ; j < (TILE_HEIGHT/N)+2 ; j++ ){
#pragma HLS UNROLL
            out_val.pixel[j] = in_val.pixel[j+(n*TILE_HEIGHT/N)];
        }
        dst << out_val;
      }
  }
}

void downstrm2upstrm_output_array(hls::stream<output_array_of_pixels_t_div> &src, hls::stream<output_array_of_pixels_t> &dst){
    output_array_of_pixels_t_div in_val;
    output_array_of_pixels_t out_val;
    l1: for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
      l3: for ( int n = 0 ; n < N ; n++ ){
#pragma HLS UNROLL
        in_val = src.read();
        l2: for ( int j = 0 ; j < TILE_HEIGHT/N ; j++ ){
#pragma HLS UNROLL
				  out_val.pixel[j+(n*TILE_HEIGHT/N)] = in_val.pixel[j];
        }
      }
      dst << out_val;
    }
}

void upstrm2downstrm_rgb(hls::stream<array_of_pixels_rgb_t> &src, hls::stream<array_of_pixels_rgb_t_div> &dst){
    array_of_pixels_rgb_t in_val;
    array_of_pixels_rgb_t_div out_val;
    l1: for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
        in_val = src.read();
        l3 : for ( int n = 0 ; n < N ; n++ ){
#pragma HLS UNROLL
            l2: for ( int j = 0 ; j < TILE_HEIGHT/N ; j++ ){
#pragma HLS UNROLL
                //out_val.pixel[j] = in_val.pixel[j+(n*TILE_HEIGHT/N)];
                out_val.pixel[j].r = in_val.pixel[j+(n*TILE_HEIGHT/N)].r;
                out_val.pixel[j].g = in_val.pixel[j+(n*TILE_HEIGHT/N)].g;
                out_val.pixel[j].b = in_val.pixel[j+(n*TILE_HEIGHT/N)].b;
            }
            dst << out_val;
        }
    }
}

void downstrm2upstrm_yuv(hls::stream<array_of_pixels_yuv_t_div> &src, hls::stream<array_of_pixels_yuv_t> &dst){
    array_of_pixels_yuv_t_div in_val;
    array_of_pixels_yuv_t out_val;
    l1: for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
        l3: for ( int n = 0 ; n < N ; n++ ){
#pragma HLS UNROLL
            in_val = src.read();
            l2: for ( int j = 0 ; j < TILE_HEIGHT/N ; j++ ){
#pragma HLS UNROLL
				//out_val.pixel[j+(n*TILE_HEIGHT/N)] = in_val.pixel[j];
				out_val.pixel[j+(n*TILE_HEIGHT/N)].luma = in_val.pixel[j].luma;
				//out_val.pixel[j+(n*TILE_HEIGHT/N)].cb = in_val.pixel[j].cb;
				//out_val.pixel[j+(n*TILE_HEIGHT/N)].cr = in_val.pixel[j].cr;
            }
        }
        dst << out_val;
    }
}

void upstrm2downstrm_array_of_pixels_t(hls::stream<array_of_pixels_t> &src, hls::stream<array_of_pixels_t_div> &dst){
	array_of_pixels_t in_val;
	array_of_pixels_t_div out_val;
    l1: for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
        in_val = src.read();
        l3 : for ( int n = 0 ; n < N ; n++ ){
#pragma HLS UNROLL
            l2: for ( int j = 0 ; j < TILE_HEIGHT/N ; j++ ){
#pragma HLS UNROLL
                out_val.pixel[j] = in_val.pixel[j+(n*TILE_HEIGHT/N)];
            }
            dst << out_val;
        }
    }
}

void downstrm2upstrm_array_of_pixels_t(hls::stream<array_of_pixels_t_div> &src, hls::stream<array_of_pixels_t> &dst){
	array_of_pixels_t_div in_val;
    array_of_pixels_t out_val;
    l1: for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
    	l3: for ( int n = 0 ; n < N ; n++ ){
#pragma HLS UNROLL
    		in_val = src.read();
            l2: for ( int j = 0 ; j < TILE_HEIGHT/N ; j++ ){
#pragma HLS UNROLL
            	out_val.pixel[j+(n*TILE_HEIGHT/N)] = in_val.pixel[j];
            }
    	}
        dst << out_val;
	}
}

static vx_uint8 usat8(vx_int32 a)
{
    if (a > 255)
        a = 255;
    if (a < 0)
        a = 0;
    return (vx_uint8)a;
}

void rgb2yuv_bt709(vx_uint8 r, vx_uint8 g, vx_uint8 b,
		   vx_uint8 *y)
{
    /*
    Y'= 0.2126*R' + 0.7152*G' + 0.0722*B'
    U'=-0.1146*R' - 0.3854*G' + 0.5000*B'
    V'= 0.5000*R' - 0.4542*G' - 0.0458*B'
    */
    vx_ufixed16_8 f_r = SHORT2FIXED(r);
    vx_ufixed16_8 f_g = SHORT2FIXED(g);
    vx_ufixed16_8 f_b = SHORT2FIXED(b);
    vx_ufixed32_16 f_y = 0 + FIXED_16_8_0_2126 * f_r + FIXED_16_8_0_7152 * f_g + FIXED_16_8_0_0722 * f_b;
//    vx_ufixed32_16 f_u = 0 - FIXED_16_8_0_1146 * f_r - FIXED_16_8_0_3854 * f_g + FIXED_16_8_0_5000 * f_b;
//    vx_ufixed32_16 f_v = 0 + FIXED_16_8_0_5000 * f_r - FIXED_16_8_0_4542 * f_g - FIXED_16_8_0_0458 * f_b;
    vx_int32 i_y = FIXED2INT(f_y);
//    vx_int32 i_u = FIXED2INT(f_u + INT2FIXED(128));
//    vx_int32 i_v = FIXED2INT(f_v + INT2FIXED(128));

    *y  = usat8(i_y);
//    *cb = usat8(i_u);
//    *cr = usat8(i_v);
/*
    *y  = i_y;
    *cb = i_u;
    *cr = i_v;
*/
}

template<typename T, typename R>
void vxConvertColor_tile_strm(int tile_width, int tile_height, hls::stream<R> &src, hls::stream<T> &dst){
	R in_val;
	T out_val;
	vx_uint8 r,g,b;
	vx_uint8 luma;
l1: for ( int x = 0 ; x < tile_width ; x++ ){
		in_val = src.read();
		l2: for ( int y = 0 ; y < tile_height ; y++ ){
			r = in_val.pixel[y].r;
			g = in_val.pixel[y].g;
			b = in_val.pixel[y].b;
			rgb2yuv_bt709(r,g,b,&luma);
			out_val.pixel[y].luma = luma;
			//out_val.pixel[y].cb = cb;
			//out_val.pixel[y].cr = cr;
		}
		dst << out_val;
	}
}

void vxConvertColor_tile(hls::stream<array_of_pixels_rgb_t> &src, hls::stream<array_of_pixels_yuv_t> &dst){

    hls::stream<array_of_pixels_rgb_t_div> strm_in;
    hls::stream<array_of_pixels_yuv_t_div> strm_out;

    upstrm2downstrm_rgb(src,strm_in);
    //vxConvertColor_tile_strm(TILE_WIDTH, TILE_HEIGHT, src, dst);
    vxConvertColor_tile_strm(TILE_WIDTH*N, TILE_HEIGHT/N, strm_in, strm_out);
    downstrm2upstrm_yuv(strm_out,dst);
}

vx_uint8 vx_clamp_u8_i32(vx_int32 value)
{
    vx_uint8 v = 0;
    if (value > 255)
    {
        v = 255;
    }
    else if (value < 0)
    {
        v = 0;
    }
    else
    {
        v = (vx_uint8)value;
    }
    return v;
}

static vx_int32 vx_convolve8with16(vx_uint8 pixels_0_0,vx_uint8 pixels_0_1,vx_uint8 pixels_0_2,
				   vx_uint8 pixels_1_0,vx_uint8 pixels_1_1,vx_uint8 pixels_1_2,
				   vx_uint8 pixels_2_0,vx_uint8 pixels_2_1,vx_uint8 pixels_2_2,
                                   const vx_int16 conv[3][3])
{
    vx_int32 div, sum;
    div = conv[0][0] + conv[0][1] + conv[0][2] +
          conv[1][0] + conv[1][1] + conv[1][2] +
          conv[2][0] + conv[2][1] + conv[2][2];
    sum = (conv[0][0] * pixels_0_0) + (conv[0][1] * pixels_0_1) + (conv[0][2] * pixels_0_2) +
          (conv[1][0] * pixels_1_0) + (conv[1][1] * pixels_1_1) + (conv[1][2] * pixels_1_2) +
          (conv[2][0] * pixels_2_0) + (conv[2][1] * pixels_2_1) + (conv[2][2] * pixels_2_2);
    if (div == 0)
        div = 1;
    return sum / div;
}

template<typename T, typename R>
static void conv3x3_tile_strm(int tile_width, int tile_height, hls::stream<T> &src, hls::stream<R> &dst, const vx_int16 conv[3][3]){

	T linebuf[2*N+1];
	T in_val;
	R out_val;
	vx_int32 sum;

  l1: for ( int x = 0 ; x < tile_width+2 ; x++ ){
  	in_val = src.read();
    l4: for ( int i = 2*N ; i > 0 ; i-- ){
  #pragma HLS UNROLL
        linebuf[i] = linebuf[i-1];
    }
		linebuf[0] = in_val;
		if ( x > ((2*N)-1) ) {
		l2: for (int y = 0 ; y < tile_height ; y++ ){
		    sum = vx_convolve8with16(
                            linebuf[2*N].pixel[y],  linebuf[N].pixel[y],  linebuf[0].pixel[y],
                            linebuf[2*N].pixel[y+1],linebuf[N].pixel[y+1],linebuf[0].pixel[y+1],
                            linebuf[2*N].pixel[y+2],linebuf[N].pixel[y+2],linebuf[0].pixel[y+2],
							              conv);
				out_val.pixel[y] = vx_clamp_u8_i32(sum);
			}
			dst << out_val;
		}
	}
}

void vxGaussian3x3(hls::stream<input_array_of_pixels_t> &src, hls::stream<output_array_of_pixels_t> &dst){
  hls::stream<input_array_of_pixels_t_div> strm_in;
	hls::stream<output_array_of_pixels_t_div> strm_out;
	upstrm2downstrm_input_array(src,strm_in);
	conv3x3_tile_strm<input_array_of_pixels_t_div,output_array_of_pixels_t_div>(TILE_WIDTH*N, TILE_HEIGHT/N, strm_in, strm_out, gaussian);
	downstrm2upstrm_output_array(strm_out,dst);
}


#define ITER    16

typedef unsigned short dinp_t;
typedef unsigned short dout_t;

unsigned short int cordic_isqrt (unsigned int x)
{

#pragma	HLS INLINE
	unsigned char i;
	unsigned short int y;
	unsigned long int m;
	unsigned short int base = (1<<(ITER-1))&0xFFFF;

       y = 0 ;
 L0:      for (i = 1; i <= ITER; i++)
       {
#pragma	HLS PIPELINE
               y +=  base ;
               m = (unsigned long int) y * (unsigned long int) y;
               if  (m > x )
               {
                       y -= base ;  // base should not have been added, so we substract again
               }
               base = base >> 1 ;      // shift 1 digit to the right = divide by 2
        }
        return y ;
}

dout_t process_magnitude_int(dinp_t real_data, dinp_t imag_data)
{
#pragma	HLS INLINE OFF
	typedef signed int  acc_t;
	dinp_t mag_data;
	acc_t accu_plus, temp_datar, temp_datai;

	acc_t temp_long;

	temp_datar = (acc_t)real_data*(acc_t)real_data;
	temp_datai = (acc_t)imag_data*(acc_t)imag_data;
	accu_plus = temp_datar + temp_datai;

	mag_data = cordic_isqrt((unsigned int) accu_plus);

	return mag_data;
}

#define ROT 11

//typedef unsigned short dinp_t;
//typedef unsigned short dout_t;

template <int TOT, int INT>
ap_fixed<TOT, INT> cordic_sqrt(dinp_t x0, dinp_t y0)
{
	 // atan_lut = round( 2^10 * atan(2.^(-k)))
	  // with k = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	  static const signed short int atan_lut[ROT] = { 804, 475, 251, 127, 64, 32, 16, 8, 4, 2, 1 };
	  signed   short int z, zp;
	  unsigned char i;

  ap_fixed<TOT, INT> x, y, xp, yp, x2;

  // to compensate the cordic gain of G = 1.0/0.6072
  const ap_fixed<16,1, AP_RND_MIN_INF, AP_SAT> inv_G = 0.607253031529134; // that is 0.6072 == 453 / 746;

  xp=x0;
  yp=y0;
  zp=0;

for (i=0;i<ROT;i++)
  {
#pragma HLS PIPELINE II=1
    if (yp<0) {
      x = xp - (yp>>i);
      y = yp + (xp>>i);
      z = zp - atan_lut[i];
    } else {
      x = xp + (yp>>i);
      y = yp - (xp>>i);
      z = zp + atan_lut[i];
    }
	xp=x;
	yp=y;
	zp=z;
  }

// compensating the cordic gain
#pragma HLS RESOURCE variable=x2 core=MUL6S

  x2     =  xp * inv_G; //xn = ((x * 453) / 746) ;
//x2 =   (xp *311)>>9; // much less accurate

  return x2;
}


dout_t process_magnitude_cordic(dinp_t real_data, dinp_t imag_data)
{
#pragma	HLS INLINE OFF

//#ifndef SQRT_AP_INT
//dout_t mag_data = (dout_t) cordic_sqrt<40,32>( real_data, imag_data ); // for CORDIC SOLUTION 3 WHEN SQRT_AP_INT IS NOT DEFINED
//#else
dout_t mag_data = (dout_t) cordic_sqrt<24,18>( real_data, imag_data ); // for CORDIC SOLUTION 4  WHEN SQRT_AP_INT IS DEFINED
//#endif

return mag_data;
}

dout_t process_magnitude(dinp_t real_data, dinp_t imag_data)
{
	vx_uint32 grad_x_16 = (vx_uint32) imag_data;
	vx_uint32 grad_y_16 = (vx_uint32) real_data;
	vx_uint32 grad_0 = grad_x_16 * grad_x_16;
	vx_uint32 grad_1 = grad_y_16 * grad_y_16;
	vx_uint32 sum32 = grad_0 + grad_1;
	sqrt_in_data_t sum = sqrt_in_data_t(sum32);
	sqrt_out_data_t sqrt_out;
	fxp_sqrt(sqrt_out, sum);
	return (dout_t)sqrt_out;
}

void vxMagnitude_function(vx_uint8 grad_x, vx_uint8 grad_y, vx_uint8 *dst){
	//dout_t dst_t = process_magnitude_cordic(grad_y, grad_x);
#if defined(IMP_1)
	dout_t dst_t = process_magnitude_int(grad_y, grad_x);
#elif defined(IMP_2)
	dout_t dst_t = process_magnitude_cordic(grad_y, grad_x);
#elif defined(IMP_3)
	dout_t dst_t = process_magnitude(grad_y, grad_x);
#else
	dout_t dst_t = process_magnitude(grad_y, grad_x);
#endif

	if (dst_t > 255)
		*dst = 255;
	else
		*dst = dst_t;
}

template<typename T>
static void magnitude_strm(int tile_width, int tile_height, hls::stream<T> &grad_x, hls::stream<T> &grad_y, hls::stream<T> &output){
	T grad_x_inval;
	T grad_y_inval;
	T out_val;
	vx_uint8 g_x,g_y,dst;
	l1: for ( int x = 0 ; x < tile_width ; x++ ){
		grad_x_inval = grad_x.read();
		grad_y_inval = grad_y.read();
		l2 : for ( int y = 0 ; y < tile_height ; y++ ){
			g_x = grad_x_inval.pixel[y];
			g_y = grad_y_inval.pixel[y];
			vxMagnitude_function(g_x,g_y,&dst);
			out_val.pixel[y] = dst;
		}
		output << out_val;
	}
}



void vxMagnitude(hls::stream<array_of_pixels_t> &grad_x, hls::stream<array_of_pixels_t> &grad_y, hls::stream<array_of_pixels_t> &output){
	hls::stream<array_of_pixels_t_div> grad_x_strm_in;
	hls::stream<array_of_pixels_t_div> grad_y_strm_in;
	hls::stream<array_of_pixels_t_div> strm_out;
	upstrm2downstrm_array_of_pixels_t(grad_x,grad_x_strm_in);
	upstrm2downstrm_array_of_pixels_t(grad_y,grad_y_strm_in);
	//magnitude_strm(TILE_WIDTH, TILE_HEIGHT, grad_x, grad_y, output);
	magnitude_strm(TILE_WIDTH, TILE_HEIGHT, grad_x_strm_in, grad_y_strm_in, strm_out);
	downstrm2upstrm_array_of_pixels_t(strm_out,output);

}

void cordic_atan2( coord_t y0, coord_t x0, phase_t *zn)
{
#pragma HLS PIPELINE II=1
#pragma HLS INLINE
	coord_t x, y, xp, yp;
	phase_t z, zp;
	bool dneg;
	unsigned char i;

	const phase_t cord_M_PI = 180;
	const phase_t cord_M_PI_2 = 90;
	static const phase_t atan_2Mi[] = {45.0, 26.56, 14.03, 7.12, 3.57, 1.78, 0.89, 0.44, 0.22};

//	const phase_t cord_M_PI = 3.14159265358979323846;
//	const phase_t cord_M_PI_2 = 1.57079632679489661923;
//	static const phase_t atan_2Mi[] = { 0.7854, 0.4636, 0.2450, 0.1244, 0.0624,
//			0.0312, 0.0156, 0.0078, 0.0039 };

	if (x0 < 0)
		x = -x0;
	else
		x = x0;
	if (y0 < 0)
		y = -y0;
	else
		y = y0;
	z=0;

	if (y0==0) // SPECIAL CASE Y==0
	{
		if (x0<0)
			*zn = cord_M_PI;
		else
			*zn = 0;
		return;
	}

	if (x0==0) // SPECIAL CASE X==0
	{
		if (y0<0)
			*zn = -cord_M_PI_2;
		else
			*zn = cord_M_PI_2;
		return;
	}

	unsigned char quadrant = 0;
	if ((x0>0) & (y0>0))
		quadrant = 1;
	else if ((x0<0) & (y0>0))
		quadrant = 2;
	else if ((x0<0) & (y0<0))
		quadrant = 3;
	else if ((x0>0) & (y0<0))
		quadrant = 4;

	LOOP1:for (i=0;i<=P_ROT;i++)
	{
#pragma HLS PIPELINE II=1

			dneg = (y > 0);
			if (dneg) {
				xp = x+(y>>i);
				yp = y-(x>>i);
				zp = z + atan_2Mi[i];
			}
			else {
				xp = x - (y>>i);
				yp = y + (x>>i);
				zp = z - atan_2Mi[i];
			}
			x = xp;
			y = yp;
			z = zp;
	}
	if (quadrant==1)
		*zn = z;
	else if (quadrant==2)
		*zn = cord_M_PI - z;
	else if (quadrant==3)
		*zn = z - cord_M_PI;
	else if (quadrant==4)
		*zn = -z;
}

void vxPhase_function(unsigned char grad_x, unsigned char grad_y, unsigned char *dst){
	coord_t y0;
	coord_t x0;
	phase_t zn;

	y0 = (coord_t) grad_y;
	x0 = (coord_t) grad_x;

	cordic_atan2(y0, x0, &zn);
	*dst = (unsigned char) zn;

}

template<typename T>
static void phase_strm(int tile_width, int tile_height, hls::stream<T> &grad_x, hls::stream<T> &grad_y, hls::stream<T> &output){
	T grad_x_inval;
	T grad_y_inval;
	T out_val;
	unsigned char g_x,g_y,dst;
	l1: for ( int x = 0 ; x < tile_width ; x++ ){
		grad_x_inval = grad_x.read();
		grad_y_inval = grad_y.read();
		l2 : for ( int y = 0 ; y < tile_height ; y++ ){
			g_x = grad_x_inval.pixel[y];
			g_y = grad_y_inval.pixel[y];
			vxPhase_function(g_x,g_y,&dst);
			out_val.pixel[y] = dst;
		}
		output << out_val;
	}
}


void vxPhase(hls::stream<array_of_pixels_t> &grad_x, hls::stream<array_of_pixels_t> &grad_y, hls::stream<array_of_pixels_t> &output){
	hls::stream<array_of_pixels_t_div> grad_x_strm_in;
	hls::stream<array_of_pixels_t_div> grad_y_strm_in;
	hls::stream<array_of_pixels_t_div> strm_out;
	upstrm2downstrm_array_of_pixels_t(grad_x,grad_x_strm_in);
	upstrm2downstrm_array_of_pixels_t(grad_y,grad_y_strm_in);
	phase_strm(TILE_WIDTH, TILE_HEIGHT, grad_x_strm_in, grad_y_strm_in, strm_out);
	downstrm2upstrm_array_of_pixels_t(strm_out,output);

}

void vxSobel3x3_tile_grad_x(hls::stream<input_array_of_pixels_t> &src, hls::stream<output_array_of_pixels_t> &grad_x){
	hls::stream<input_array_of_pixels_t_div> strm_in;
	hls::stream<output_array_of_pixels_t_div> strm_out;
	upstrm2downstrm_input_array(src,strm_in);
	conv3x3_tile_strm<input_array_of_pixels_t_div,output_array_of_pixels_t_div>(TILE_WIDTH*N, TILE_HEIGHT/N, strm_in, strm_out, sobel_x);
	downstrm2upstrm_output_array(strm_out,grad_x);
}

void vxSobel3x3_tile_grad_y(hls::stream<input_array_of_pixels_t> &src, hls::stream<output_array_of_pixels_t> &grad_y){
	hls::stream<input_array_of_pixels_t_div> strm_in;
	hls::stream<output_array_of_pixels_t_div> strm_out;
	upstrm2downstrm_input_array(src,strm_in);
	conv3x3_tile_strm<input_array_of_pixels_t_div,output_array_of_pixels_t_div>(TILE_WIDTH*N, TILE_HEIGHT/N, strm_in, strm_out, sobel_y);
	downstrm2upstrm_output_array(strm_out,grad_y);
}

void array_of_pixels_yuv_t_to_input_array_of_pixels_t(hls::stream<array_of_pixels_yuv_t> &src,
													  hls::stream<input_array_of_pixels_t> &dst){
	array_of_pixels_yuv_t in_val;
	input_array_of_pixels_t out_val;
    l1: for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
    	in_val = src.read();
    	out_val.pixel[0] = in_val.pixel[0].luma;
    	out_val.pixel[TILE_HEIGHT+1] = in_val.pixel[TILE_HEIGHT-1].luma;
    	l2: for ( int j = 0 ; j < TILE_HEIGHT ; j++ ){
#pragma HLS PIPELINE
#pragma HLS UNROLL
    		out_val.pixel[j+1] = in_val.pixel[j].luma;
    	}
    	dst << out_val;
    }
}

void split_output_array_of_pixels_t_to_input_array_of_pixels_t(
		hls::stream<output_array_of_pixels_t> &src,
		hls::stream<input_array_of_pixels_t> &dst_1,
		hls::stream<input_array_of_pixels_t> &dst_2){
	output_array_of_pixels_t in_val;
	input_array_of_pixels_t out_val;
    l1: for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
    	in_val = src.read();
    	out_val.pixel[0] = in_val.pixel[0];
    	out_val.pixel[TILE_HEIGHT+1] = in_val.pixel[TILE_HEIGHT-1];
    	l2: for ( int j = 0 ; j < TILE_HEIGHT ; j++ ){
#pragma HLS PIPELINE
#pragma HLS UNROLL
    		out_val.pixel[j+1] = in_val.pixel[j];
    	}
    	dst_1 << out_val;
    	dst_2 << out_val;
    }
}

void split_output_array_of_pixels_t_to_array_of_pixels_t(
		hls::stream<output_array_of_pixels_t> &src,
		hls::stream<array_of_pixels_t> &dst_1,
		hls::stream<array_of_pixels_t> &dst_2
		){
	output_array_of_pixels_t in_val;
	array_of_pixels_t out_val;
    l1: for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
    	in_val = src.read();
    	l2: for ( int j = 0 ; j < TILE_HEIGHT ; j++ ){
#pragma HLS PIPELINE
#pragma HLS UNROLL
    		out_val.pixel[j] = in_val.pixel[j];
    	}
    	dst_1 << out_val;
    	dst_2 << out_val;
    }
}

void Sobel(hls::stream<array_of_pixels_rgb_t> &src, hls::stream<array_of_pixels_t> &mag, hls::stream<array_of_pixels_t> &pha){

  hls::stream<array_of_pixels_yuv_t> grey;
  hls::stream<input_array_of_pixels_t> grey_wb;
  hls::stream<output_array_of_pixels_t> gauss;
  hls::stream<input_array_of_pixels_t> gauss_wb_1;
  hls::stream<input_array_of_pixels_t> gauss_wb_2;
  hls::stream<output_array_of_pixels_t> grad_x;
  hls::stream<output_array_of_pixels_t> grad_y;
  hls::stream<array_of_pixels_t> grad_x_1;
  hls::stream<array_of_pixels_t> grad_y_1;
  hls::stream<array_of_pixels_t> grad_x_2;
  hls::stream<array_of_pixels_t> grad_y_2;

  vxConvertColor_tile(src, grey);
  array_of_pixels_yuv_t_to_input_array_of_pixels_t(grey, grey_wb);
  vxGaussian3x3(grey_wb, gauss);
  split_output_array_of_pixels_t_to_input_array_of_pixels_t(gauss, gauss_wb_1, gauss_wb_2);
  vxSobel3x3_tile_grad_x(gauss_wb_1, grad_x);
  vxSobel3x3_tile_grad_y(gauss_wb_2, grad_y);
  split_output_array_of_pixels_t_to_array_of_pixels_t(grad_x, grad_x_1, grad_x_2);
  split_output_array_of_pixels_t_to_array_of_pixels_t(grad_y, grad_y_1, grad_y_2);
  vxMagnitude(grad_x_1, grad_y_1, mag);
  vxPhase(grad_x_2, grad_y_2, pha);
}
