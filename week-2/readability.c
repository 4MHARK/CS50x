// #include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int count_words(string text);
int count_letters(string text);
int count_sentences(string text);

int main(void)
{
    string user = get_string("User Text: ");
    int words = count_words(user);
    int letters = count_letters(user);
    int sentences = count_sentences(user);

    float L = (letters / (float) words) * 100;
    float S = (sentences / (float) words) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];
        if (isalpha(c))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];
        if (c == ' ')
        {
            words++;
        }
    }
    return words + 1;
}
int count_sentences(string text)
{
    int sentence = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];
        if (c == '.' || c == '!' || c == '?')
        {
            sentence++;
        }
    }
    return sentence;
}
