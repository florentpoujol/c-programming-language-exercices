#include <stdio.h>
#include <stdlib.h>

#define MAX_OUTPUT_LENGTH 50
#define OUTSIDE_WORD 0
#define INSIDE_WORD 1

/*
prints its input one word per line
*/
int main()
{
    int c,
    i = 0,
    state = OUTSIDE_WORD;
    char output[MAX_OUTPUT_LENGTH];

    while (i < MAX_OUTPUT_LENGTH && (c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == INSIDE_WORD) {
                output[i++] = '\n';
                state = OUTSIDE_WORD;
            }
        }
        else {
            output[i++] = c;
            state = INSIDE_WORD;
        }
    }
    output[i] = '\0';

    printf("\noutput:\n%s\n", output);
}
