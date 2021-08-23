#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int main(){
	char texto[251];

  printf("Introduzca una cadena -> " );
  gets(texto);

  char* ptr = texto;

  while( *ptr != '\0' )
  {
    while( !isalpha(*ptr) && (*ptr != '\0') )
      ptr++;

    if( isalpha(*ptr) )
    {
      if( *ptr >= 'a' )
        *ptr = toupper(*ptr);
      ptr++;
    }

    while( isalpha(*ptr) )
    {
      *ptr = tolower(*ptr);
      ptr++;
    }
  }

  puts(texto);
  

}


