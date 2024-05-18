//"code name_of_the_file.c" to create a file
//"make name_of_the_file" to compile the code to binary
// "./name_of_the_file" to run the code

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string user_name = get_string("What is your name? ");

    printf("Hello, %s\n", user_name);
}
