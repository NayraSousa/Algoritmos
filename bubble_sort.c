#include <stdio.h>

int main(){

    int vetor[10] = {43, 65, 2, 90, 54, 10, 23, 88, 4, 13};
    int temporaria, controle;

    controle = 1;
    while(controle){
        controle = 0;
        for(int i = 0; i <= 8; i++){
            if(vetor[i] > vetor[i+1]){
                temporaria = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = temporaria;
                controle = 1;
        }
        
    }
    }
    for (int m = 0; m <= 9; m++){
        printf("%i\n", vetor[m]);
    }
    return 0;
}