#include <stdio.h>

int main() {
    const float ICMS = 0.17;
    const float COFINS = 0.076;
    const float PIS_PASEP = 0.0165;
    
    float preco_inicial;


    printf("Digite o preço inicial: R$ ");
    scanf("%f", &preco_inicial);


    float valor_icms = preco_inicial * ICMS;
    float valor_confis = preco_inicial * COFINS;
    float valor_pis_pasep = preco_inicial * PIS_PASEP;


    float preco_final = preco_inicial + valor_icms + valor_confis + valor_pis_pasep;


    printf("Preço Inicial..........: R$ %.2f\n", preco_inicial);
    printf("Valor ICMS (17%).......: R$ %.2f\n", valor_icms);
    printf("Valor COFINS (7,6%)....: R$ %.2f\n", valor_confis);
    printf("Valor PIS/PASEP (1,65%): R$ %.2f\n", valor_pis_pasep);
    printf("Preço Final............: R$ %.2f\n", preco_final);

    return 0;
}
