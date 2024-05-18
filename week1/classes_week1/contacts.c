//"code name_of_the_file.c" to create a file
//"make name_of_the_file" to compile the code to binary
// "./name_of_the_file" to run the code

#include <cs50.h>
#include <stdio.h>

int main(void) {

    string name = get_string("What's your name? ");
    int age = get_int("How old are you? ");
    string phone_number = get_string("What's your phone number? ");

    printf("%s is %i yo and the phone number is: %s.\n", name, age, phone_number);
}
