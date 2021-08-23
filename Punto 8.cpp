#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define N 80

int longitudDeseada ;
int largo;
char frase[N];
char frase2[N];
int valor, j=0;
char caracter;
char d[100];
char s[100];
	int cont;
char tmpCad[80];

int main ()
{
    printf("Ingrese la frase: ");
    gets(frase);
    gets(frase2);

    largo = strlen(frase);
 
    printf("Desea borrar caracteres por : \n\n1. Derecha \n2. Izquierda \nSeleccione.. ");
    scanf("%d",&valor);
    
    printf("Cuantos caracteres deseas borrar :");
    scanf("%d",&longitudDeseada);
    
      
    printf("La frase original es: %s\n",frase);
    
    

    for (int i=0; i<largo-longitudDeseada;i++)
    {
	
	d[i] = frase[i];
    
	}
	
	
	printf("%s",d);
	
	return 0;
}
