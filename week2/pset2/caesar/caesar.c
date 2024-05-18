#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);

char rotate(char letter, int n);

int main(int argc, string argv[])
{
    // check if there are more than 2 arguments, if not return a message to user
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // check if the second argument contains only digits, if not return a message to user
    if (only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // gets string from user
    string plaintext = get_string("Plaintext:  ");

    printf("Ciphertext: ");

    // converts argv[1] to int
    int key = atoi(argv[1]);

    // go through all the chars in the string
    for (int i = 0, j = strlen(plaintext); i < j; i++)
    {
        if (isalpha(plaintext[i]))
        {
            // call function rotate
            char ciphered_char = rotate(plaintext[i], key);
            printf("%c", ciphered_char);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}

// function only_digits
bool only_digits(string s)
{
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
    }
    return true;
}

// function rotate
char rotate(char letter, int n)
{
    // if lower case
    if (letter >= 'a' && letter <= 'z')
    {
        char c = letter;
        char ciphered = ((c - 'a' + n) % 26) + 'a';
        return ciphered;
    }
    // if upper case
    else if (letter >= 'A' && letter <= 'Z')
    {
        char c = letter;
        char ciphered = ((c - 'A' + n) % 26) + 'A';
        return ciphered;
    }
    else
    {
        return letter;
    }
}
