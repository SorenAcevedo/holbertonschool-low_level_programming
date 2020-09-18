#include <stdio.h>
/**
* main - while oricedure
*
* Return: 0
*/
int main(void)
{
	int num;
  	int num_2;
  
	for (num = 48; num < 58; num++)
	{
    		for (num_2 = 48; num_2 < 58; num_2++)
		{
      			putchar(num);
      			putchar(num_2);
      			
			if (num != 57 && num_" != 57)
        		{
          		putchar(',');
          		putchar(' ');
        		}
    		}
	}
	putchar('\n');
	return (0);
}
