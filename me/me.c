#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asks user to input name
    string name = get_string("What's Your Name?: ");
    // Prints hello + inputed user name
    printf("Hello, %s\n", name);
}
