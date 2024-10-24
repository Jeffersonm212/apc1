#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao = 0;

    while (opcao != 5){
    system("clear");
     printf("MENU PRINCIPAL\n");
     printf("1 - Consultar saldo\n"); 
     printf("2 - Fazer recarga\n");
     printf("3 - Ver recados\n");
     printf("4 - Ultimas ligacoes\n");
     printf("5 - Sair\n");

     printf("Entre com uma opcao =>\n");
     scanf("%i", &opcao);
    while (getchar() != '\n');
  
    switch (opcao)
    {
    case 1:{
        system("clear");
         printf("CONSULTA SALDO\n\n");
        printf("Seu saldo eh de R$ 10\n");
    }
         break;
    case 2: printf("Valor de recarga\n"); break;
    case 3: printf("Voce naum tem recados\n"); break;
    case 4: printf("99999-0000\n 999999-000000\n"); break;
    case 5: printf("Ate logo\n"); break;
    default: printf("Opcao invalida. Tende novamente\n");
    }
    if (opcao != 5)
    {
       printf("Prinsioner ENTER para continuar...");
       getchar();
    }
    }

return 0;
}