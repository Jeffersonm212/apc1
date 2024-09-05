#include <stdio.h>

int main() {

  char produto [21];
  int quantidade = 0;
  float valor = 0.0f;
  scanf("%s", produto);
  scanf("%i", &quantidade);
  scanf("%f", &valor);
  
  printf("Produto: %s[^\n]\n", produto);
  printf("Quantidade: %i[^\n]\n", quantidade);
  printf("Valor: %f[^\n]\n", valor);

  printf("==============================\n");
  printf("         P E D I D O\n");
  printf("==============================\n");


  printf("Declare seu produto: ");
  printf("Declare sua quantidade: ");
  printf("Declare seu valor: ");
  

  return 0;
}