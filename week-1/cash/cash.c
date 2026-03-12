#include <stdio.h> // Allows us to use printf and scanf

int main(void)
{
    int change; // Variable to store the amount of change the user owes

    // Keep asking the user for input until they enter a non-negative number
    do
    {
        printf("Change owed: ");
        scanf("%d", &change); // Read the user input and store it in 'change'
    }
    while (change < 0); // Repeat if the user enters a negative number

    int coins = 0; // Variable to count the total number of coins needed

    // Use as many 25-cent coins (quarters) as possible
    while (change >= 25)
    {
        change -= 25; // Subtract 25 from the remaining change
        coins++;      // Increase the coin count
    }

    // Use as many 10-cent coins (dimes) as possible
    while (change >= 10)
    {
        change -= 10; // Subtract 10 from the remaining change
        coins++;      // Increase the coin count
    }

    // Use as many 5-cent coins (nickels) as possible
    while (change >= 5)
    {
        change -= 5; // Subtract 5 from the remaining change
        coins++;     // Increase the coin count
    }

    // Use as many 1-cent coins (pennies) as possible
    while (change >= 1)
    {
        change -= 1; // Subtract 1 from the remaining change
        coins++;     // Increase the coin count
    }

    // Print the total number of coins used
    printf("%d\n", coins);
}
