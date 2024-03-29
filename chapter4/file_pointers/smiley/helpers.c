#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Make black pixels turn red
            if (image[i][j].rgbtGreen == 0x00)
            {
                image[i][j].rgbtRed = 0xff;
                image[i][j].rgbtBlue = 0xff;
            }
        }
    }
}
