#include <stdio.h>

#define MAX_OUTPUT_LENGTH 50

/*
copy the input to the output
replace tab  by \t, bakcspace by \b and backlash by \\
*/
int main()
{
    int c, outputLength = -1;
    char output[MAX_OUTPUT_LENGTH];

    while (outputLength < MAX_OUTPUT_LENGTH && (c = getchar()) != EOF) {
        if (c == '\b') {
            output[++outputLength] = '\\';
            output[++outputLength] = 'b';
        } 
        else if (c == '\t') {
            output[++outputLength] = '\\';
            output[++outputLength] = 't';
        }
        else if (c == '\\') {
            output[++outputLength] = c;
            output[++outputLength] = c;
        }
        else
            output[++outputLength] = c;
    }

    printf("\noutput:\n%s\n", output);
}
