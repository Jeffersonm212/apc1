#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    int incremento = numero;
    int decremento = numero;

    printf("O pré-incremento do número %i é %i\n", numero, ++incremento);
    printf("O pré-decremento do número %i é %i\n", numero, --decremento);

    incremento = numero;
    decremento = numero;

    printf("O pós-incremento do número %i é %i\n", numero, incremento++);
    printf("O pós-decremento do número %i é %i\n", numero, decremento--);

    return 0;
}
