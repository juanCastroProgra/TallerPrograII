#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
char *tok;
int cont = 0 ;
char palabra[256];
char buscar[256];
 
int main() {
	
	printf("Ingrese una cadena de palabras :");
	gets(palabra);
	printf("Ingrese la palabra que desea buscar : ");
	gets(buscar);
	tok = strtok (palabra, " ,.:;");
	
	while(tok != NULL)
	{
		if(stricmp(tok, buscar)==0)
		{
			cont++;
		}
		tok = strtok(NULL," ,.:;");
	}
	
	printf("\n\t La palabra :%s se encontro : %d veces",buscar,cont);

} 
	

