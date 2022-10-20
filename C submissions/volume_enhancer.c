#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

const int HEADER_SIZE = 44;

typedef uint8_t BYTE;

typedef int16_t BYTE2;

int main(int argc, char *argv[])
{
    
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }
    
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    
    float factor = atof(argv[3]);

    BYTE header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input);
    printf("%s", header);
    printf("\n");
    fwrite(header, HEADER_SIZE, 1, output);
    printf("%s", header);
  
    BYTE2 sample;
    while(fread(&sample, sizeof(BYTE2), 1, input))
    {
        sample *= factor;
        fwrite(&sample, sizeof(BYTE2), 1, output);
    }
    
    fclose(input);
    fclose(output);
} 
