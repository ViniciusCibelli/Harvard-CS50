// Write a program to check if an array of characters is in alphabetical order
// Assume the characters are all uppercase

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string word = get_string("Write a word: ");

    for (int i = 0, length = strlen(word); i < length -1; i++)
    {
        if (word[i] > word[i + 1])
        {
            printf("Not in alphabetical order!\n");
            return false;
        }
    }
    printf("In alphabetical order!\n");
    return false;

}
