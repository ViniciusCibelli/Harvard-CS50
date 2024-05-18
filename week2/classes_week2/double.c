//Create an array of int in which each int is 2 times the value of the previous one
//The first element is 1
//print the array int by int

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int size = get_int("What's the SIZE of your sequence? ");
    int sequence[size];

    sequence[0] = 1;
    printf("Your sequence is: %i ", sequence[0]);

    for (int i = 1; i < size; i++)
    {
        sequence[i] = sequence[i - 1] * 2;
        printf("%i ", sequence[i]);
    }
    printf("\n");

}
