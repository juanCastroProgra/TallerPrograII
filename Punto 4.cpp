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
int valor;
char caracter;
char s[100];

int main ()
{
    printf("Ingrese la frase: ");
    gets(frase);

    largo = strlen(frase);
 
    printf("Desea agregar caracteres por : \n\n1. Derecha \n2. Izquierda \nSeleccione.. ");
    scanf("%d",&valor);
    
    printf("Cuantos caracteres deseas ingresar :");
    scanf("%d",&longitudDeseada);
    
    printf("Que caracter deseas poner :");
    scanf("%s",&caracter);    
    printf("La frase original es: %s\n",frase);
    for (int i=0; i<longitudDeseada;i++)
    {
    	
    	s[i] = caracter;
	}
	
	if (valor==1)
	{
			printf ("La frase con caracteres por derecha es : %s%s",frase,s);
	}else
	{
		printf ("La frase con caracteres por izquierda es : %s%s",s,frase);
	}


   

    return 0;
}

