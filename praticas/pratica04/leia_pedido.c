#include <stdio.h>

int main() {

  char produto[21];
  int quantidade = 0;
  float valor = 0.0f;

  printf("Declare seu produto: ");
  scanf("%s", produto);A

  printf("Declare sua quantidade: ");
  scanf("%i", &quantidade);

  printf("Declare seu valor: ");
  scanf("%f", &valor);


  printf("\n==============================\n");
  printf("         P E D I D O\n");
  printf("==============================\n");
  printf("Produto        Qtd    Valor Unit\n");
  printf("%-14s %03i    %.2f\n", produto, quantidade, valor);
  printf("==============================\n");

  return 0;
}
