#ifndef SUBSTITUTION_CIPHER
#define SUBSTITUTION_CIPHER

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

#endif