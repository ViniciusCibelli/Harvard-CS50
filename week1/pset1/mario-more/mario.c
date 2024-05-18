#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int lenght);
void print_double_space();

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Choose the height: ");
    }
    while (height < 1 || height > 8);

    // Print a pyramid of that height
    for (int row = 0; row < height; row++)
    {
        print_row(height, row + 1); // Call function to print hashes and spaces./mario
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

    print_double_space(); // Function double spaces- print "  "

    for (int i = 0; i < lenght; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_double_space()
{
    printf("  ");
}
