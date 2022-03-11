#include <stdio.h>
/**
 * main- Write a program that prints the alphabet in lowercase.
 * You can only use the putchar
 * Return:
 */
int main(void)
{
int lw = 'a';
while (lw <= 'z')
{
if (lw == 'e' || lw == 'q')
{
lw += 1;
}
else
{
putchar(lw);
lw += 1;
}
}
putchar('\n');
return (0);
}
