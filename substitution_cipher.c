#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

char Alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
                   'X', 'Y', 'Z'};
int main(void);
char *input(void);
char *encryption(char *);
char *decryption(char *);

char *input(void)
{
    static char input[10000] = {0};
    char c;
    unsigned int i = 0;
    while ((c = getchar()) != '\n')
    {
        input[i] = toupper(c);
        i++;
    }

    return input;
}

char *encryption(char *plaintext)
{
    int i = 0;
    static char Ciphertext[1000] = {0};
    while (plaintext[i] != '\0')
    {
        if (plaintext[i] == 'X')
        {
            Ciphertext[i] = 'A';
            i++;
        }
        else if (plaintext[i] == 'Y')
        {
            Ciphertext[i] = 'B';
            i++;
        }
        else if (plaintext[i] == 'Z')
        {
            Ciphertext[i] = 'C';
            i++;
        }
        else
        {
            Ciphertext[i] = plaintext[i] + 3U;
            i++;
        }
    }
    return Ciphertext;
}

char *decryption(char *ciphertext)
{
    int i = 0;
    static char plaintext[1000] = {0};
    while (ciphertext[i] != '\0')
    {
        if (ciphertext[i] == 'A')
        {
            plaintext[i] = 'X';
            i++;
        }
        else if (ciphertext[i] == 'B')
        {
            plaintext[i] = 'Y';
            i++;
        }
        else if (ciphertext[i] == 'C')
        {
            plaintext[i] = 'Z';
            i++;
        }
        else
        {
            plaintext[i] = ciphertext[i] - 3U;
            i++;
        }
    }
    return plaintext;
}

int main()
{
    int i;
    printf("enter the plaintext to be encrypted by substitution\n");
    char *plainText = input();
    char *ciphertext = encryption(plainText);
    printf("Encrypted message is :\n");
    for (i = 0; ciphertext[i] != '\0'; i++)
    {
        printf("%c", ciphertext[i]);
    }
    printf("\n");
    char *Decrypted_text = decryption(ciphertext);
    printf("Decrypted message is :\n");
    for (i = 0; Decrypted_text[i] != '\0'; i++)
    {
        printf("%c", Decrypted_text[i]);
    }
}