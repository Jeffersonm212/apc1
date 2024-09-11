#include <stdio.h>

int main() {

int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int milhares, centenas, dezenas, unidades;

       unidades = numero % 10;
       
       dezenas = (numero / 10) % 10;

       centenas = (numero / 100) % 10;

       milhares = (numero / 1000) % 10;

    printf("O número %d é decomposto em %d milhar(es), %d centena(s), %d dezena(s) e %d unidade(s).\n",
           numero, milhares, centenas, dezenas, unidades);

    return 0;
}
