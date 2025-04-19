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

char *input(void)
{
    static char input[10000] = {0};
    char c;
    unsigned int i = 0;
    while ((c = getchar()) != EOF)
    {
        input[i] = toupper(c);
        i++;
    }
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]=='\n')
        {
            input[i]='\0';
        }
    }
    return input;
}

char *encryption(char *plaintext)
{
    int i = 0;
    static char Ciphertext[1000] = {0};
    while (plaintext[i] != '\0')
    {
        if(plaintext[i]=='X')
        {
            Ciphertext[i] = 'A';
            i++;
        }
        else if(plaintext[i]=='Y')
        {
            Ciphertext[i] = 'B';
            i++;
        }
        else if(plaintext[i]=='Z')
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

int main()
{
    int i;
    printf("enter the plaintext to be encrypted by substitution\n");
    char *plainText = input();
    char *ciphertext = encryption(plainText);
    printf("Encypted message is :\n");
    for(i=0;ciphertext[i]!='\0';i++)
    {
        printf("%c",ciphertext[i]);
    }
}