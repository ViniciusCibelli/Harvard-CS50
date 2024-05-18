//while loops are good when we dont know how many times we want to loop something
//while something is true do this
//you have some condition, you dont know when that condition will be true

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int j = 0;

    while (j < 4)
    {
        printf("#");
        j++;
    }
    printf("\n");
}
