#include <cs50.h>
#include <stdio.h>
#include <string.h>

int string_lenght(string s);

int main(void)
{
    string name = get_string("What's your name? ");
    int lenght = string_lenght(name); //Creating a function to count the string(array) lenght

    int second_way = strlen(name); //Using the function from library string.h to get the lenghtc

    printf("Your string lenght is %i\n", lenght);

    printf("Your string lenght is %i\n", second_way);

}

int string_lenght(string s)
{
    int counter = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        printf("name[%i] is %c\n", i, s[i]);
        counter++;
    }
    return counter;
}
