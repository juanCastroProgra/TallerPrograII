#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

char cadena[50];
char tmpCad[80];
char c[100],C;
int i, s, j = 0;
bool v = false;

printf("Ingrese la cadena: ");

gets(cadena);
s = strlen(cadena);




for (i = 0; i < s; i++)
{
    if (cadena[i] == '@') 
    {
       v = true;
       
    }
}
if(v)
{
	printf("Es correo electronico");
}else
{
	printf("No es correo electronico");
}

return 0;
}
