#include <stdio.h>

int main(){

    int vetor[10] = {43, 65, 2, 90, 54, 10, 23, 88, 4, 13};
    int temporaria;

    for(int i = 0; i <= 9; i++){
        for (int j = 0; j <= 9; j++){
            if (vetor[j] > vetor[j+1]){
                temporaria = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = temporaria;

            }
        }
    }
    for (int m = 0; m <= 9; m++){
        printf("%i\n", vetor[m]);

    }
    return 0;
}