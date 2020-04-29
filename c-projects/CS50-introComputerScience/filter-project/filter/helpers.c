#include "helpers.h"
#include <math.h>

// swap pixel label
void swap(RGBTRIPLE *oldPixel, RGBTRIPLE *newPixel);

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // labels for new values
    float grayscalePixel;
    RGBTRIPLE newPixel;

    // loop over each row
    for (int i = 0; i < height; i++)
    {
        // loop over each pixel
        for (int j = 0; j < width; j++)
        {
            // if the pixel is already gray, continue
            if (image[i][j].rgbtRed == image[i][j].rgbtGreen && image[i][j].rgbtRed == image[i][j].rgbtBlue)
            {
                continue;
            }

            // find average for gray color
            // round grayscale float for whole number
            grayscalePixel = (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0;
            grayscalePixel = round(grayscalePixel);

            // assign R G B to the new grayscale color
            // function to assign new pixels
            newPixel.rgbtRed = grayscalePixel;
            newPixel.rgbtGreen = grayscalePixel;
            newPixel.rgbtBlue = grayscalePixel;
            swap(&image[i][j], &newPixel);
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // label for newPixel value
    RGBTRIPLE newPixel;

    // for loop for row
    for (int i = 0; i < height; i++)
    {
        // for loop for pixel location
        for (int j = 0; j < width; j++)
        {
            // sepia algorithms
            // round each float
            float sepiaRed = .393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue;
            sepiaRed = round(sepiaRed);
            float sepiaGreen = .349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue;
            sepiaGreen = round(sepiaGreen);
            float sepiaBlue = .272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue;
            sepiaBlue = round(sepiaBlue);

            // if sepia alg < 0 it should be 0
            // if sepia alg < 255 it should be 255
            if (sepiaRed < 0)
            {
                sepiaRed = 0;
            }
            else if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }

            if (sepiaGreen < 0)
            {
                sepiaGreen = 0;
            }
            else if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }

            if (sepiaBlue < 0)
            {
                sepiaBlue = 0;
            }
            else if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            // assign new pixel colors for R G B
            // use swap function to assign newPixel
            newPixel.rgbtRed = sepiaRed;
            newPixel.rgbtGreen = sepiaGreen;
            newPixel.rgbtBlue = sepiaBlue;
            swap(&image[i][j], &newPixel);
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // for loop for row
    for (int i = 0; i < height; i++)
    {
        // for loop for pixel
        for (int j = 0; j < width / 2; j++)
        {
            swap(&image[i][j], &image[i][width - j - 1]);
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // label for newPixel value
    RGBTRIPLE newPixel[height][width];

    // copy array of old image
    for (int a = 0; a < height; a++)
    {
        for (int b = 0; b < width; b++)
        {
            newPixel[a][b] = image[a][b];
        }
    }

    // for loop for row
    for (int i = 0; i < height; i++)
    {
        // loop for pixel
        for (int j = 0; j < width; j++)
        {
            // find avg of surrounding 9 px
            // labels for RGB sums
            float sumRed = 0;
            float sumGreen = 0;
            float sumBlue = 0;
            float boxTotal = 0;

            // top left corner
            if (i == 0 && j == 0)
            {
                sumRed = (image[i][j].rgbtRed + image[i][j + 1].rgbtRed + image[i + 1][j].rgbtRed + image[i + 1][j + 1].rgbtRed);
                sumGreen = (image[i][j].rgbtGreen + image[i][j + 1].rgbtGreen + image[i + 1][j].rgbtGreen + image[i + 1][j + 1].rgbtGreen);
                sumBlue = (image[i][j].rgbtBlue + image[i][j + 1].rgbtBlue + image[i + 1][j].rgbtBlue + image[i + 1][j + 1].rgbtBlue);
                boxTotal = 4.0;
            }
            // top right corner
            else if (i == 0 && j == width - 1)
            {
                sumRed = (image[i][j].rgbtRed + image[i][j - 1].rgbtRed + image[i + 1][j].rgbtRed + image[i + 1][j - 1].rgbtRed);
                sumGreen = (image[i][j].rgbtGreen + image[i][j - 1].rgbtGreen + image[i + 1][j].rgbtGreen + image[i + 1][j - 1].rgbtGreen);
                sumBlue = (image[i][j].rgbtBlue + image[i][j - 1].rgbtBlue + image[i + 1][j].rgbtBlue + image[i + 1][j - 1].rgbtBlue);
                boxTotal = 4.0;
            }
            // bottom left corner
            else if (i == height - 1 && j == 0)
            {
                sumRed = (image[i][j].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1][j + 1].rgbtRed + image[i][j + 1].rgbtRed);
                sumGreen = (image[i][j].rgbtGreen + image[i - 1][j].rgbtGreen + image[i - 1][j + 1].rgbtGreen + image[i][j + 1].rgbtGreen);
                sumBlue = (image[i][j].rgbtBlue + image[i - 1][j].rgbtBlue + image[i - 1][j + 1].rgbtBlue + image[i][j + 1].rgbtBlue);
                boxTotal = 4.0;
            }
            // bottom right corner
            else if (i == height - 1 && j == width - 1)
            {
                sumRed = (image[i][j].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1][j - 1].rgbtRed + image[i][j - 1].rgbtRed);
                sumGreen = (image[i][j].rgbtGreen + image[i - 1][j].rgbtGreen + image[i - 1][j - 1].rgbtGreen + image[i][j - 1].rgbtGreen);
                sumBlue = (image[i][j].rgbtBlue + image[i - 1][j].rgbtBlue + image[i - 1][j - 1].rgbtBlue + image[i][j - 1].rgbtBlue);
                boxTotal = 4.0;
            }
            // left edge
            else if (i != 0 && i != height - 1 && j == 0)
            {
                sumRed = (image[i][j].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1][j + 1].rgbtRed + image[i][j + 1].rgbtRed + image[i +
                        1][j].rgbtRed + image[i + 1][j + 1].rgbtRed);
                sumGreen = (image[i][j].rgbtGreen + image[i - 1][j].rgbtGreen + image[i - 1][j + 1].rgbtGreen + image[i][j + 1].rgbtGreen +
                        image[i + 1][j].rgbtGreen + image[i + 1][j + 1].rgbtGreen);
                sumBlue = (image[i][j].rgbtBlue + image[i - 1][j].rgbtBlue + image[i - 1][j + 1].rgbtBlue + image[i][j + 1].rgbtBlue + image
                        [i + 1][j].rgbtBlue + image[i + 1][j + 1].rgbtBlue);
                boxTotal = 6.0;
            }
            // top edge
            else if (i == 0 && j != 0 && j != width - 1)
            {
                sumRed = (image[i][j].rgbtRed + image[i][j - 1].rgbtRed + image[i + 1][j - 1].rgbtRed + image[i + 1][j].rgbtRed + image[i + 1]
                        [j + 1].rgbtRed + image[i][j + 1].rgbtRed);
                sumGreen = (image[i][j].rgbtGreen + image[i][j - 1].rgbtGreen + image[i + 1][j - 1].rgbtGreen + image[i + 1][j].rgbtGreen +
                        image[i + 1][j + 1].rgbtGreen + image[i][j + 1].rgbtGreen);
                sumBlue = (image[i][j].rgbtBlue + image[i][j - 1].rgbtBlue + image[i + 1][j - 1].rgbtBlue + image[i + 1][j].rgbtBlue + image[i
                        + 1][j + 1].rgbtBlue + image[i][j + 1].rgbtBlue);
                boxTotal = 6.0;
            }
            // right edge
            else if (i != 0 && i != height - 1 && j == width - 1)
            {
                sumRed = (image[i][j].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1][j - 1].rgbtRed + image[i][j - 1].rgbtRed + image[i + 1][j]
                        .rgbtRed + image[i + 1][j - 1].rgbtRed);
                sumGreen = (image[i][j].rgbtGreen + image[i - 1][j].rgbtGreen + image[i - 1][j - 1].rgbtGreen + image[i][j - 1].rgbtGreen + image
                        [i + 1][j].rgbtGreen + image[i + 1][j - 1].rgbtGreen);
                sumBlue = (image[i][j].rgbtBlue + image[i - 1][j].rgbtBlue + image[i - 1][j - 1].rgbtBlue + image[i][j - 1].rgbtBlue + image[i +
                        1][j].rgbtBlue + image[i + 1][j - 1].rgbtBlue);
                boxTotal = 6.0;
            }
            // bottom edge
            else if (i == height - 1 && j != 0 && j != width - 1)
            {
                sumRed = (image[i][j].rgbtRed + image[i][j - 1].rgbtRed + image[i - 1][j - 1].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1]
                        [j + 1].rgbtRed + image[i][j + 1].rgbtRed);
                sumGreen = (image[i][j].rgbtGreen + image[i][j - 1].rgbtGreen + image[i - 1][j - 1].rgbtGreen + image[i - 1][j].rgbtGreen +
                        image[i - 1][j + 1].rgbtGreen + image[i][j + 1].rgbtGreen);
                sumBlue = (image[i][j].rgbtBlue + image[i][j - 1].rgbtBlue + image[i - 1][j - 1].rgbtBlue + image[i - 1][j].rgbtBlue + image[i
                        - 1][j + 1].rgbtBlue + image[i][j + 1].rgbtBlue);
                boxTotal = 6.0;
            }
            // normal case
            else
            {
                sumRed = (image[i - 1][j - 1].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1][j + 1].rgbtRed + image[i][j - 1].rgbtRed + image
                      [i][j].rgbtRed + image[i][j + 1].rgbtRed + image[i + 1][j - 1].rgbtRed + image[i + 1][j].rgbtRed + image[i + 1][j + 1].rgbtRed);
                sumGreen = (image[i - 1][j - 1].rgbtGreen + image[i - 1][j].rgbtGreen + image[i - 1][j + 1].rgbtGreen + image[i][j - 1].rgbtGreen
                        + image[i][j].rgbtGreen + image[i][j + 1].rgbtGreen + image[i + 1][j - 1].rgbtGreen + image[i + 1][j].rgbtGreen + image[i + 1]
                        [j + 1].rgbtGreen);
                sumBlue = (image[i - 1][j - 1].rgbtBlue + image[i - 1][j].rgbtBlue + image[i - 1][j + 1].rgbtBlue + image[i][j - 1].rgbtBlue +
                        image[i][j].rgbtBlue + image[i][j + 1].rgbtBlue + image[i + 1][j - 1].rgbtBlue + image[i + 1][j].rgbtBlue + image[i + 1]
                        [j + 1].rgbtBlue);
                boxTotal = 9.0;
            }

            float avgRed = round(sumRed / boxTotal);
            float avgGreen = round(sumGreen / boxTotal);
            float avgBlue = round(sumBlue / boxTotal);

            // assign new pixel colors for R G B
            // use swap function to assign newPixel
            newPixel[i][j].rgbtRed = avgRed;
            newPixel[i][j].rgbtGreen = avgGreen;
            newPixel[i][j].rgbtBlue = avgBlue;
        }
    }

    // replace pixels of old image
    for (int r = 0; r < height; r++)
    {
        for (int s = 0; s < width; s++)
        {
            swap(&image[r][s], &newPixel[r][s]);
        }
    }

    return;
}

// swap pixel function
void swap(RGBTRIPLE *oldPixel, RGBTRIPLE *newPixel)
{
    // similar to example, use temp to reassign new pixels
    RGBTRIPLE temp = *oldPixel;
    *oldPixel = *newPixel;
    *newPixel = temp;
}