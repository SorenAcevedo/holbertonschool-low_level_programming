#include <stdio.h>
/**
* main - while
*
*
*/
int main(void)
{
        int letra = 65;

        while (letra < 124) {
                putchar(letra);
                putchar("\n");
                letra = letra +1;
        }
}
