// For loops are good when we know how many times we want to inerate
// Adding a loop inside a loop to solve the problem is not bad!

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
