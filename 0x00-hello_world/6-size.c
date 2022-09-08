#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int: %lu byte(s)\n", (unsigned long)sixeof(a));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sixeof(b));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sixeof(d));
printf("size of an float: %lu byte(s)\n", (unsigned long)sixeof(f));
return (0);
}
