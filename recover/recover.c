#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Accept the single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }
    // open the memory car
    FILE *raw_file = fopen(argv[1], "r");
    // creat a buffer for a block data
    uint8_t buffer[512];
    bool found_jpeg = false;
    int counter = 0;
    char filename[8];
    FILE *img = NULL;
    // while there's still date left to read from the card
    while (fread(buffer, 1, 512, raw_file))
    {
        // creat JPEGs from the data
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            found_jpeg = true;
        }
        if (found_jpeg == true)
        {
            if (counter != 0)
            {
                fclose(img);
            }
            sprintf(filename, "%03i.jpg", counter);
            img = fopen(filename, "w");
            fwrite(buffer, 1, 512, img);
            found_jpeg = false;
            counter++;
        }
        else if (counter != 0)
        {
            fwrite(buffer, 1, 512, img);
        }
    }
    fclose(img);
    fclose(raw_file);
}