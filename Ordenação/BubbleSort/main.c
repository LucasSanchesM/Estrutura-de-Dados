#include<stdio.h>
#include<stdlib.h>

void ordenar(int *vetor, int tamanho){
    int i;
    int j;
    for(i = 0; i<tamanho-1; i++){
        for(j = 0; j<tamanho-1-i; j++){
            if(vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}


void main(){
    int n;
    printf("Insira o tamanho do seu vetor: ");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));

    printf("Insira os valores do seu vetor:\n");

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    ordenar(vetor, n);

    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);
}

