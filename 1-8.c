#include <stdio.h>

/*
replace blank, tab and newline in the input
*/
int main()
{
    int c, blankCount = 0, tabCount = 0, nlCount = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blankCount;
        
        if (c == '\t') {
            ++tabCount;
            ++blankCount;
        }
        
        if (c == '\n')
            ++nlCount;
    }

    printf("\nblank:   %d\n", blankCount);
    printf("tab:     %d\n", tabCount);
    printf("newline: %d\n", nlCount);
}
