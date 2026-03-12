#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);

int main(void)
{
    string player1 = get_string("player 1: ");
    string player2 = get_string("player 2: ");
    int score1 = compute_score(player1);
    int score2 = compute_score(player2);
    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie\n");
    }
}
int compute_score(string word)
{

    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {

        char letter = word[i];
        int lowercase = tolower(letter) - 'a';
        int value = points[lowercase];
        score += value;
    }
    return score;
}
