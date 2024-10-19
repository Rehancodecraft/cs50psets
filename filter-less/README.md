Problem Description
This project implements a set of image filters in C that can be applied to 24-bit BMP images. These filters include grayscale, sepia, reflection, and blur, which manipulate the RGB values of pixels to achieve various visual effects.

The program processes each pixel of a BMP image, transforming the color values according to the chosen filter, and outputs a modified BMP file.

Program Details
Filename: helpers.c
Directory: filter-less
Input: The program accepts a BMP file and a filter type.
Output: The program generates a new BMP file with the applied filter.
How to Run
Open the terminal and navigate to the filter-less folder.
Compile the program using:
make filter
Apply a filter by running:
./filter -g images/yard.bmp out.bmp
This applies the grayscale filter to yard.bmp and outputs the result as out.bmp. Use -s, -r, or -b for sepia, reflection, or blur respectively.
Filters
Grayscale
The grayscale filter converts the image to black and white by averaging the RGB values of each pixel.

Sepia
The sepia filter gives the image a warm, brownish tone by adjusting the RGB values using the sepia formula.

Reflection
The reflection filter flips the image horizontally, creating a mirror image.

Blur
The blur filter applies a box blur effect, averaging the colors of surrounding pixels to soften the image.

Example Usage
Grayscale:
./filter -g images/yard.bmp out.bmp
Sepia:
./filter -s images/yard.bmp out.bmp
Reflection:
./filter -r images/yard.bmp out.bmp
Blur:
./filter -b images/yard.bmp out.bmp
File Structure
filter.c: Contains the main logic for processing images.
helpers.c: Where the filter functions (grayscale, sepia, reflect, blur) are implemented.
bmp.h: Contains definitions for the BMP file format and the RGBTRIPLE struct.
Makefile: Specifies how the program is compiled.
