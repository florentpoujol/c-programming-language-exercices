#include <stdio.h>
#include <stdlib.h>
#include <wctype.h>

#define MAX_LENGTH 100

// prints a histogram of the length of words (only save the length and their occurence)
int main()
{
    int i;
    int ocurrencesPerLength[MAX_LENGTH]; // key is the length of word, value is the occurence

    for (i = 0; i < MAX_LENGTH; ++i)
    {
        ocurrencesPerLength[i] = 0;
    }
    
    int c, wordLength = 0;

    while ((c = getchar()) != EOF) {
        if (iswspace(c)) {
            if (wordLength > 0 && wordLength < MAX_LENGTH) {
                ocurrencesPerLength[ wordLength ]++;
                wordLength = 0;
            }
        } else {
            wordLength++;
        }
    }

    if (wordLength > 0 && wordLength < MAX_LENGTH) {
        ocurrencesPerLength[ wordLength ]++;
    }

    // print
    char bar[] = "===================================================================================================="; // 100 chars
    // note creating the string like so:   char* bar = "...";
    // would give a segfault when modifying individual characters

    for (int length = 0; length < MAX_LENGTH; ++length)
    {
        int o = ocurrencesPerLength[ length ];
        if (o > 0) {
            bar[o] = '\0';
            printf("length = %d : occurence = %d : %s\n", length, o, bar);
            bar[o] = '=';
        }
    }
}
