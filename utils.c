#include <stdlib.h>
#include <string.h>


void print_stdin()
{
    printf("printing STDIN \n");
    int c;
    while ((c = getchar()) != EOF) {
        printf("%c", c);
    }
}


void array_print_inline(int array[], int size, char *text)
{
    int i;
    printf("%s size=%d : ", text, size);
    for (i = 0; i < size; i++) {

        printf("%d ", array[i]);
    }
    printf("\n");
}


void array_print(int array[], int size, char *text)
{
    int i;
    printf("%s size=%d\n", text, size);
    for (i = 0; i < size; i++) {
        printf("%d : %d\n", i, array[i]);
    }
    printf("\n");
}


void str_repeat(char strDest[], char strSource[], int count)
{
    strcpy(strDest, "");
    for (int i = 0; i < count; i++) {
        strcat(strDest, strSource);
    }
}