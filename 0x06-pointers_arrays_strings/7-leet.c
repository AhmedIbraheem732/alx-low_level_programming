#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
    char *ptr = str;
    char *leetMap = "aAeEoOtTlL";
    char *leetCode = "43071";
    int i, j;

    while (*ptr)
    {
        i = 0;
        while (leetMap[i])
        {
            if (*ptr == leetMap[i])
            {
                *ptr = leetCode[i / 2];
                break;
            }
            i++;
        }
        ptr++;
    }

    return str;
}
