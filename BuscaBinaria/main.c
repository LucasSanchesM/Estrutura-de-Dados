#include <stdio.h>
#include <stdlib.h>


void buscaBinaria(int *vetor, int inicio, int fim, int valorBuscado){

    if(inicio > fim){
        printf("\n!!Valor nao encontrado!!\n");
        return;
    }

    int meio = (int)((inicio + fim) / 2);

    if(vetor[meio] == valorBuscado){
        printf("\nO numero %d esta na posicao: %d\n", valorBuscado, meio);
        return;
    }

    else if(vetor[meio] < valorBuscado){
        buscaBinaria(vetor, meio+1, fim, valorBuscado);
    }

    else if(vetor[meio] > valorBuscado){
        buscaBinaria(vetor, inicio, meio-1, valorBuscado);
    }
}

int main()
{
    int n;
    printf("Insira o tamanho do seu vetor: ");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));

    printf("Insira os valores do seu vetor:\n");

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    int valor;
    printf("Insira o valor que deseja buscar: ");
    scanf("%d", &valor);

    buscaBinaria(vetor, 0, n-1, valor);
    free(vetor);
}
