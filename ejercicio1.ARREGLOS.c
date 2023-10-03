//Programa Corregir errores, que revisa si dos cadenas de texto son iguales
#include <stdio.h>
#include <string.h>

int main()
{
    int x, band=0;
    char texto[100], texto2[100];
    printf("Cadena de texto 1: ");
    scanf("%s",texto);
    printf("Cadena de texto 2: ");
    scanf("%s",texto2);
    while (texto[x]!='\0' && texto[x]!='\0')
    {
        if (texto[x]!=texto2[x]){
            printf("Las cadenas de texto no son iguales");
            band=1;
            break;
        }
        x++;
        if (band==0)
            printf("Las cadenas de texto son iguales");
            break;
    }
    return 0;
}
