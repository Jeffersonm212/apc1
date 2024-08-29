#include <stdio.h>

int main() {

  unsigned long int  matricula = 00000000;
    printf("Matrícula: %08lu\n", matricula);
  unsigned  int idade = 99;
    printf("Idade: %u anos\n", idade);
  unsigned int altura = 9.90;
    printf("Altura: %3.1f m\n", altura);
  float peso = 999.0; 
  printf("Peso: %.1f kg\n", peso);
  char sexo = 'F';  

  printf("Sexo: %c\n", sexo);

  return 0;
  }