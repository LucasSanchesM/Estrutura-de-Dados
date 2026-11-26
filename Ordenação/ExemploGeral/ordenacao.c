/*
 * ordenacao.c
 * Implementacoes didaticas de cinco algoritmos de ordenacao.
 */
#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

void copiarVetor(const int origem[], int destino[], int tamanho) {
	int i;
	for(i = 0; i<tamanho; i++){
		destino[i] = origem[i];
	}
}

void exibirVetor(const int vetor[], int tamanho) {
    int i;
	 
    printf("[");
    for(i = 0; i<tamanho; i++){
	 	printf("%d%s ", vetor[i], i < tamanho-1 ? ", " : "");
    }
    printf("]\n");
}

void bubbleSort(int vetor[], int tamanho) {
    int i, houveTroca=0;
	for(i=0; i<tamanho-1; i++){
	    int j;
	    for(j = 0; j<tamanho-1-i; j++){
			if(vetor[j] > vetor[j+1]){
			    trocar(&vetor[j], &vetor[j+1]);
				houveTroca = 1;
		    }
	    }
    if(!houveTroca)
	   break;
    }
}

void selectionSort(int vetor[], int tamanho) {
    int i;
    for(i = 0 ; i<tamanho-1;i++){
 	    int menor = i;
 	    int j;
 	    for(j = i+1; j<tamanho; j++){
		    if(vetor[j] < vetor[menor]){
		    	menor = j;
			}
        }
        if(menor != i){
        	trocar(&vetor[i], &vetor[menor]);
		}
		
	}
}

void trocar(int *a, int *b){
	int temp = *a;
	*a = *b
	*b = *temp;
}

void insertionSort(int vetor[], int tamanho) {
	int i;
	
	for(i = 1; i<tamanho; i++){
		int chave = vetor[i];
		int j = i-1;
		while(j>=0 && vetor[j] > chave){
			vetor[j+1] = vetor[j];
			j--;
		}
		vetor[j+1] = chave;
		
	}
	
}

int mergeSort(int vetor[], int tamanho) {
}

void quickSort(int vetor[], int inicio, int fim) {
}
