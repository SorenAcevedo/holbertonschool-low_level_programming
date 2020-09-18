#include <stdio.h>
/**
* main - while
*
*
*/
int main(void)
{
        int letra = 97;

        while (letra < 123) {
                putchar(letra);
                letra = letra +1;
        }
	putchar('\n');
	return (0);
}
