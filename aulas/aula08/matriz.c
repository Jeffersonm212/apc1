#include <stdio.h>
int main () {
int matriz [5][3];
matriz [0][0] = 1;
matriz [0][1] = 2;
matriz [1][0] = 3;
matriz [1][1] = 4;
matriz [1][2] = 5;
matriz [2][0] = 6;
matriz [2][1] = 7;
matriz [2][2] = 8;
matriz [3][0] = 9;
matriz [3][1] = 10;
matriz [3][2] = 11;
matriz [3][3] = 12;
matriz [4][0] = 13;
matriz [4][1] = 14;
matriz [4][2] = 15;
    for (int i=0; i<5; i++){
        for (int j=0; j<3; j++){
            printf("%i " , matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}