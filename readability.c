#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");
    int textLen = strlen(text);

    // Count the number of letters in the text
    int letters = 0;

    for (int i = 0; i < textLen; i++) // Iterate per text length
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    // Count the number of words in the text
    int words = 1;

    for (int i = 0; i < textLen; i++) // Iterate per text length
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }

    // Count the number of sentences in the text
    char punctuation[3] = {'.', '!', '?'};
    int sentences = 0;

    for (int i = 0; i < textLen; i++) // Iterate through characters
    {
        for (int j = 0; j < 3; j++) // Iterate through array
        {
            if (text[i] == punctuation[j])
            {
                sentences++;
            }
        }
    }

    float L = (float) letters / (float) words * 100;   // Find average
    float S = (float) sentences / (float) words * 100; // Find average

    // Compute the Coleman-Liau index
    float index = 0.0588 * L - 0.296 * S - 15.8;

    int answer = round(index);

    // Print the grade level
    if (answer < 0)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (answer > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %d\n", answer);
        return 0;
    }
}
