#include "main.h"
/**
 * _strncat - Function that concatenate two strings
 * @dest: An Argument
 * @src: Second Argument
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n){
    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < n){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}