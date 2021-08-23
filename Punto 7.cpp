#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

char cadena[50];
char tmpCad[80];
char c[100],C;
int i, s, j = 0;

printf("Ingrese la cadena: ");

gets(cadena);
s = strlen(cadena);

printf("Ingrese el caracter a borrar:");
gets(c);


for (i = 0; i < s; i++)
{
    if (cadena[i] != c[0] && cadena[i] != c[1] && cadena[i] != c[2]&& cadena[i] != c[3]&& cadena[i] != c[4]&& cadena[i] != c[5]&& cadena[i] != c[6]&& cadena[i] != c[7]&& cadena[i] != c[8])
    {
        tmpCad[j] = cadena[i];
        j++;
    }
}

tmpCad[j] = '\0';

printf("%s\n", tmpCad);
return 0;
}
