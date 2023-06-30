#include <stdio.h>

/**
 * leet - function that encodes a string using the "leet" encoding scheme
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
    char leetMap[5][2] = {
        {'A', '4'},
        {'E', '3'},
        {'O', '0'},
        {'T', '7'},
        {'L', '1'}
    };

    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (str[i] == leetMap[j][0] || str[i] == leetMap[j][0] + 32)
            {
                str[i] = leetMap[j][1];
                break;
            }
        }
    }

    return str;
}

int main(void)
{
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    printf("Original string: %s", input);
    printf("Encoded string: %s", leet(input));

    return 0;
}
