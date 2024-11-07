#include <stdio.h>

int main() {
    float total = 0.0f;
    float nota_fiscal[5][3];

    for (int i = 0; i < 5; i++) {
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%f", &nota_fiscal[i][0]);
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &nota_fiscal[i][1]);

        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];

        total += nota_fiscal[i][2];
    }

    printf("\nValores dos produtos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Produto %d - Quantidade: %.2f, Preco: %.2f, Total: %.2f\n", 
                i + 1, nota_fiscal[i][0], nota_fiscal[i][1], nota_fiscal[i][2]);
    }

    printf("\nTotal da nota fiscal: %.2f\n", total);

    return 0;
}