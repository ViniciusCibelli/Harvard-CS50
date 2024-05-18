#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(int argc, string argv[]) //How many arguments your will pass, the arguments itself
{
    printf("Hello, %s\n", argv[1]); // ./greet name
    printf("Hello, %s and %s!\n", argv[1], argv[3]); //If there is no 3 arguments will return (null)

    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
