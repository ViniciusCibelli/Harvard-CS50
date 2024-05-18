// Write a program that prints each command-line argument given to the program

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%i] is %s\n", i, argv[i]);
    }
}

/*in this code the user inputs the program and more x arguments */
/*argc is the number of inputs to our program at command line
  argv is the array of our inputs at the command line*/
