//Programa que dada una cadena de texto sin espacios, imprime uno por uno las letras y después te dice cuantos caracteres son
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
	char texto[100];
	int longitud, i;
	
	printf("Cadena de texto 1: ");
	scanf("%s", texto);
	
	longitud = strlen(texto);
	
	for (i = 0; i < longitud; i++) {
        printf("letra: %c\n", texto[i]);
    }
	printf("Numero de caracteres: %d", longitud);
	
	/* Programa que invierte una cadena de texto
	char org[]= "Hola Mundo";
	char tem;
	int i, mitad, len;
	
	len = strlen(org);
	mitad = len /2;
	
	printf("La cadena original: %s \n", org);
	
    for(i=0;i<mitad;i++){
        tem = org[i];
        org[i] = org[len - i -1];
        org[len - i -1] = tem;
    }
	
	printf("La cadena invertida: %s \n", org);
	*/
	return 0;
}
