//Programa que pide 5 numeros y despues los imprime multiplicados por dos
#include <stdio.h>

int main()
{
    int a[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i] * 2);
    }
	
    return 0;
}
