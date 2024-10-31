#include <stdio.h>
int main (){
    int numeros [10];
    int maior = -999999;
    int menor = 999999;

    for (int i=0; i<10; i++){
        printf("Entre com %i0. numero: ", i+1);
        scanf("%i", &numeros[i]);
        
        if (numeros[i] > maior){
            maior = numeros[i];
        }
        if (numeros[i] < menor){
            menor = numeros[i];
        }

    }
    printf("Os numeros lidos foarm:\n");
    for(int i=0; i<10; i++){
    printf("%i ", numeros[i]);
    }
    printf("Sendo %i o maior numero\n", maior);
    printf("Sendo %i o menor numero\n", menor);



    return 0;
}