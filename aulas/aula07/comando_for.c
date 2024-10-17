#include<stdio.h>

int main() {
    int numero = 0;

    printf("Entre com um numero ente 1 e 10:\n");
    scanf("%i", &numero);

if (numero > 0 && numero < 11) {
    printf("Tabuada de %i\n", numero);
    for (int i=1; i<11; i++) {
    printf("%i x %i = %i\n", i, numero, i*numero);
    }

    for (int i=10; i<0; i--) {
    printf("%i x %i = %i\n", i, numero, i*numero);
    }
    



}else{
      printf("Numer invalido! Tente novamente.\n");
}


return 0;
}