//Write a program to print a left-aligned pyramid

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Choose the height: ");

    for(int i = 0; i < height; i++)
    {
        for(int hashes = 0; hashes <= i; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
