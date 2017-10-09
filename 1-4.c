#include <stdio.h>

/*
print celsuis-fahrenheit conversion table
*/
int main()
{
    for (int celsius = -100; celsius <= 100; celsius += 10) {
        int fahr = celsius * 9 / 5 + 32;
        printf("%4d   %d\n", celsius, fahr);
    }
}
