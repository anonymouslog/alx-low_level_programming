#include <stdio.h>
/**
 * main - Print if the number is positive, zero, or negative
 * 
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative"
 * Return (0)
 */
int main(void)
{
int c;

for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

