#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name = get_string("Your Name?: ");
    int age = get_int("Your Age?: ");
    string phone = get_string("Your Phone Number?: ");
    string location = get_string("location: ");

    printf("New contact: %s, %i, %s, %s\n", name, age, phone, location);
}
