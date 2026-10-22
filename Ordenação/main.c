/*
 * main.c
 * Menu de testes dos algoritmos de ordenacao crescente.
 */
#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

static void menu(void) {
    printf("\n=============== ORDENACAO ===============\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Insertion Sort\n");
    printf("4 - Merge Sort\n");
    printf("5 - Quick Sort\n");
    printf("0 - Sair\n");
    printf("=========================================\n");
}

int main(void) {
    const int original[TAM_VETOR] = {4, 78, 12, 3, 65, 21, 34, 77, 98, 11};
    int vetor[TAM_VETOR];
    int opcao;

    do {
        menu();
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida.\n");
            return EXIT_FAILURE;
        }
        if (opcao == 0) {
            printf("Encerrando...\n");
            break;
        }
        if (opcao < 1 || opcao > 5) {
            printf("Opcao invalida.\n");
            continue;
        }

        /* Restaura a mesma entrada antes de executar qualquer algoritmo. */
        copiarVetor(original, vetor, TAM_VETOR);
        printf("Vetor original: ");
        exibirVetor(vetor, TAM_VETOR);

        switch (opcao) {
            case 1:
                bubbleSort(vetor, TAM_VETOR);
                break;
            case 2:
                selectionSort(vetor, TAM_VETOR);
                break;
            case 3:
                insertionSort(vetor, TAM_VETOR);
                break;
            case 4:
                if (!mergeSort(vetor, TAM_VETOR)) {
                    printf("Nao foi possivel alocar o vetor auxiliar.\n");
                    return EXIT_FAILURE;
                }
                break;
            case 5:
                /* Os limites sao indices inclusivos. */
                quickSort(vetor, 0, TAM_VETOR - 1);
                break;
        }
        printf("Vetor ordenado: ");
        exibirVetor(vetor, TAM_VETOR);
    } while (opcao != 0);
    return EXIT_SUCCESS;
}
