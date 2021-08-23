#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

char cadena[50];
char tmpCad[80];
char caracter;
char c,C;
int i, s, j = 0, mitad;

printf("Ingrese la cadena: ");

gets(cadena);
s = strlen(cadena);
mitad = s/2;

caracter = cadena[mitad];
for (i = 0; i < s; i++)
{
    if (cadena[i] != caracter)
    {
        tmpCad[j] = cadena[i];
        j++;
    }
}

tmpCad[j] = '\0';

printf("%s\n", tmpCad);
return 0;
}

