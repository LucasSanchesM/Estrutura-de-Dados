#include<stdio.h>
#include<stdlib.h>

void ordenar(int *vetor, int tamanho){
    int i, j,chave;
    for(i = 1; i < tamanho; i++){
        chave = vetor[i];
        for(j = i-1; j >= 0; j--){
            if(chave < vetor[j]){
                vetor[j+1] = vetor[j];
            }else{
                break;
            }
        }
        vetor[j+1] = chave;
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
    
    ordenar(vetor, n);
    
    for(i = 0; i<n; i++){
        printf("%d ", vetor[i]);
    }
    
    
}
