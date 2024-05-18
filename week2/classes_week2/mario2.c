#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_row(int spaces, int lenght);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./mario2 number\n");
        return true;
    }

    int height = atoi(argv[1]); //converts every string to integer

    for(int row = 0; row < height; row++)
    {
        print_row(height, row + 1);
    }
}

void print_row(int spaces, int lenght)
{
    for (int space = spaces - 1; space >= lenght; space--)
    {
        printf(" ");
    }
    for (int hashes = 0; hashes < lenght; hashes++)
    {
        printf("#");
    }
    printf("\n");
}
