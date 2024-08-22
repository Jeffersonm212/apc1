#include <stdio.h>

int main(
) {
  printf("Um texto qualquer entre aspas duplas\n");

  printf("%i\n", 10);
  printf("%i %i\n", 50, 100);
  printf("%5i\n", 0001);
  printf("%05i\n", 21);

  //imprimir um numero decimal
  printf("%f\n", 8.5);
  printf("%.3f\n", 3.14159);
  printf("%8.2f\n", 110.5);
  printf("%8.2f\n", 2556.86);

  //imprime um caractere
  printf("%c\n", 'A');
  printf("%c\n", 68);

  //imprime um string
  printf("%s\n", "Boa noite");
  printf("%30s!\n", "Quero cafe");
  printf("%-30s!\n", "Quero cafe");

  return 0;
}
