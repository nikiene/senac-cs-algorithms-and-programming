// Write a program that reads a word and displays how many "A" letters this word has.
#include <stdio.h>

int main()
{
    char word[100];
    int i, count = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'A' || word[i] == 'a')
        {
            count++;
        }
    }

    printf("The word has %d 'A' letters.\n", count);

    return 0;
}