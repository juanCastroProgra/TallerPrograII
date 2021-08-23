#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

char cadena[50];
char tmpCad[80];
char c,C;
int i, s, j = 0;

printf("Ingrese la cadena: ");

gets(cadena);
s = strlen(cadena);

printf("Ingrese el caracter a borrar:");
scanf("%c",&c);


for (i = 0; i < s; i++)
{
    if (cadena[i] != c && cadena[i] != tolower(c))
    {
        tmpCad[j] = cadena[i];
        j++;
    }
}

tmpCad[j] = '\0';

printf("%s\n", tmpCad);
return 0;
}
