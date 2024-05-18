#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string fruits[2];

    fruits[0] = "banana";
    fruits[1] = "orange";

    printf("%s and %s\n", fruits[0], fruits[1]);
    printf("%c %c %c %i %c\n", fruits[0][0], fruits[0][1], fruits[0][2], fruits[0][6], fruits[0][7]);
    printf("%c %c %c\n", fruits[1][0], fruits[1][1], fruits[1][2]);
}
