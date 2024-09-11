#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, string argv[])
{
    // check if the argument is valid
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if ((strlen(argv[1]) != 26))
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./subtitution key\n");
            return 1;
        }
    }
    bool used[26] = {false};
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        int index = tolower(argv[1][i]) - 'a';
        if (used[index])
        {
            printf("characters in the key must be the unique\n");
            return 1;
        }
        used[index] = true;
    }

    string plaintext = get_string("Plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            char base = isupper(c) ? 'A' : 'a';
            int index = c - base;
            printf("%c", isupper(c) ? toupper(argv[1][index]) : tolower(argv[1][index]));
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}