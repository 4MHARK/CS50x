#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int height;

    // Get valid pyramid height from user
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8); // Ensure height is between 1 and 8

    // Build and print the pyramid
    for (int row = 1; row <= height; row++)
    {
        // Print leading spaces
        for (int space = 1; space <= height - row; space++)
        {
            printf(" ");
        }

        // Print hashes
        for (int hash = 1; hash <= row; hash++)
        {
            printf("#");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
