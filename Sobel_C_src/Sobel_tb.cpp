#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Sobel.h"
#define SHORT_ROUND 127
#define LONG_ROUND 255

using namespace std;
int main(void)
{
	array_of_pixels_rgb_t rgb_inval;
	//output_array_of_pixels_t outval;
	hls::stream<array_of_pixels_rgb_t> rgb_input_stream("rgb_input_stream");
	hls::stream<array_of_pixels_t> mag_output_stream("mag_output_stream");
	hls::stream<array_of_pixels_t> pha_output_stream("output_stream");

	for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
			for ( int j = 0 ; j < TILE_HEIGHT ; j++ ){
				rgb_inval.pixel[j].r = (i+1)*(j+1);
				rgb_inval.pixel[j].g = (i+2)*(j+2);
				rgb_inval.pixel[j].b = (i+3)*(j+3);
				cout << (int) rgb_inval.pixel[j].r << ","
					 << (int) rgb_inval.pixel[j].g << ","
					 << (int) rgb_inval.pixel[j].b << "=";
			}
			cout << "\n";
			rgb_input_stream << rgb_inval;
	}

	cout<<"-----------STARTING THE TEST BENCH----------------\n";

	Sobel(rgb_input_stream, mag_output_stream, pha_output_stream);

	cout<<"-------------DONE THE TEST BENCH------------------\n";
	int faliure_flag = 0;
	for ( int i = 0 ; i < TILE_WIDTH ; i++ ){
		array_of_pixels_t mag_outval = mag_output_stream.read();
		array_of_pixels_t pha_outval = pha_output_stream.read();
		for ( int j = 0 ; j < TILE_HEIGHT ; j++){
			cout << (int)mag_outval.pixel[j]<<","<<(int)pha_outval.pixel[j]<<"-";
		}
		cout << "\n";
	}
	return 0;
}
