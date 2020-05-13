#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    // if more than 1 arg, return correct usage
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    // open file
    FILE *file = fopen(argv[1], "r");

    // if file is empty, return failure message
    if (file == NULL)
    {
        printf("Failed to open file\n");
        return 1;
    }

    // definitions
    FILE *fileout = NULL;
    char name[8];
    typedef uint8_t BYTE;
    BYTE buffer[512];
    int count = 0;

    // loop over bytes
    while (&free)
    {
        // define byte size
        unsigned int bytesize = fread(buffer, sizeof(BYTE), 512, file);

        // if byte size is 0 & it's the end of the file, break
        if (bytesize == 0 && feof(file))
        {
            break;
        }

        // if JPEG indicator, but fileout isn't empty
        if ((buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0) && fileout != NULL)
        {
            // close file and increment count
            fclose(fileout);
            count++;
        }

        // if we found a JPEG, open file for writing
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            sprintf(name, "%03i.jpg", count);
            fileout = fopen(name, "w");
        }

        // write when we have an open file
        if (fileout != NULL)
        {
            fwrite(buffer, sizeof(BYTE), bytesize, fileout);
        }
    }
    fclose(fileout);
    fclose(file);
}
