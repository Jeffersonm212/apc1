#include <stdio.h>

int main() {
    printf("==============================\n");
    printf("     N O T A    L E G A L\n");
    printf("==============================\n");
    printf("%-15s %03i %7.2f\n", "Camiseta", 2, 39.99);
    printf("%-15s %03i %7.2f\n", "Calca", 1, 89.90);
    printf("%-15s %03i %7.2f\n", "Meia Social", 3, 19.99);

    // Imprime o rodapé e o total
    printf("==============================\n");
    printf("Total:               %7.2f\n", 229.85);

    return 0;
}
