#include<stdio.h>
#include<stdlib.h>

void ordenar(int *vetor, int tamanho){
    
    int i, j, indiceMenor;
    for(i = 0; i < tamanho-1; i++){
        indiceMenor = i;
        
        for(j = i + 1; j < tamanho; j++){
            if(vetor[j] < vetor[indiceMenor]){
                indiceMenor = j;
            }
        }
        
        int temp = vetor[i];
        vetor[i] = vetor[indiceMenor];
        vetor[indiceMenor] = temp;
    }
}

void main(){
    int n;
    
    printf("Insira o tamanho do seu vetor: ");
    scanf("%d", &n);
    
    int *vetor = malloc(n * sizeof(int));
    
    printf("\nInsira os valores do seu vetor: ");
    
    int i;
    for(i = 0; i<n ; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("\n... ordenando via selection sort ...\n");
    
    ordenar(vetor, n);
    
    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
}

o que acha?
