#include "main.h"
/**
 *
 *_strcat - Concatenates two strings together
 * @dest: A pointer to  a character that will be changed
 * @src: A pointer to a source string
 *
 * Return: pointer to the memory area s
 */
char *_strcat(char *dest, char *src)
{
int length, j;

length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
