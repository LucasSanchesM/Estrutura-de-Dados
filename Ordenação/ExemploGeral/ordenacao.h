/*
 * ordenacao.h
 * Definicoes e prototipos dos algoritmos de ordenacao crescente.
 */
#ifndef ORDENACAO_H
#define ORDENACAO_H

#define TAM_VETOR 10

/* Funcoes de apoio: copiar sem alterar a origem e exibir o vetor. */
void copiarVetor(const int origem[], int destino[], int tamanho);
void exibirVetor(const int vetor[], int tamanho);

/* Os algoritmos modificam o proprio vetor recebido. */
void bubbleSort(int vetor[], int tamanho);
void selectionSort(int vetor[], int tamanho);
void insertionSort(int vetor[], int tamanho);

/*
 * Merge Sort utiliza um vetor auxiliar alocado uma unica vez.
 * Retorna 1 em caso de sucesso ou 0 se a alocacao falhar.
 */
int mergeSort(int vetor[], int tamanho);

/* Quick Sort recebe indices inclusivos: inicio e fim.
 * Para o vetor inteiro: quickSort(vetor, 0, tamanho - 1).
 */
void quickSort(int vetor[], int inicio, int fim);

#endif
