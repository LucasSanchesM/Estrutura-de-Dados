#include<stdio.h>
#include<stdlib.h>

void merge(int inicio, int meio, int fim, int *vetor){
    int tamanho = fim - inicio + 1;
    int *temp = malloc(tamanho * sizeof(int));
    
    int i, p1 = inicio, p2 = meio+1, fim1 = 0, fim2 = 0;
    
    for(i = 0; i< tamanho; i++){
        if(!fim1 && !fim2){
            if(vetor[p1] > vetor[p2]){
                temp[i] = vetor[p2++];
            }else{
                temp[i] = vetor[p1++];
            }
            if(p1 > meio)
                fim1 = 1;
            if(p2 > fim)
                fim2 = 1;
        }
        else{
            if(!fim1){
                temp[i] = vetor[p1++]; 
            }else{
                temp[i] = vetor[p2++];
            }
        }
    }
    
    int k;
    for(i = 0, k = inicio; i < tamanho; i++, k++){
        vetor[k] = temp[i];
    }
    
    free(temp);
    
}

void mergeSort(int inicio, int fim, int *vetor){
    int meio;
    
    if(inicio < fim){
        meio = (inicio + (fim - inicio) / 2);
        mergeSort(inicio, meio, vetor);
        mergeSort(meio+1, fim, vetor);
        merge(inicio, meio, fim, vetor);
        
    }
    
}

void main(){
    
    int n;
    printf("Insira o tamanho do seu vetor: ");
    scanf("%d", &n);
    
    int *vetor = malloc(n * sizeof(int));
    
    int i;
    printf("Insira os valores do seu vetor: ");
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    mergeSort(0, n-1, vetor);
    
    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    
}
