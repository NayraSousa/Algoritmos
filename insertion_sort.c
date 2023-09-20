#include <stdio.h>

int main(){

    int vetor[7] = {11, 5, 4, 1, 3, 9, 2};
    int subst, j;

    for(int i = 0; i < 6; i++){

        if(vetor[i] > vetor[i+1]){
            subst = vetor[i+1];
            vetor[i+1] = vetor[i];
            vetor[i] = subst;
            j = i - 1;

            while(j >= 0){
                if(subst<vetor[j]){
                    vetor[j+1] = vetor[j];
                    vetor[j] = subst;

                } else{
                    break;
                }
                j = j-1;
            }
        } 
    }
    for (int j = 0; j < 7; j++){
        printf("%i  ", vetor[j]);
    }
    return 0;
}