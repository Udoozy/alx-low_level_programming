#include "main.h"
/**
 * _memcpy - The Funtion name and return type
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: The number bytes to be copied
 * Return: Always a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
}