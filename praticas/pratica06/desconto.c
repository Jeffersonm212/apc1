#include<stdio.h>

int main() {

float valor_bruto;
float valor_desconto;

printf("Digite o valor bruto: ");
scanf("%f", &valor_bruto);

    if(valor_bruto<= 100.0f){
    valor_desconto = valor_bruto * 0.1f;
    printf("O valor do seu desconto eh %0.1f\n", valor_desconto);
    }else{
    if(valor_bruto<= 500.0f)
        valor_desconto = valor_bruto * 0.5f;
        printf("O valor do seu desconto e %0.5f\n" ,valor_desconto);
    }
return 0;

}