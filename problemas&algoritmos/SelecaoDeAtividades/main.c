#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char id[5];
	int fim;
	int inicio;
}Atividade;

int comparar(const void*a, const void *b){
	const Atividade *x = (const Atividade *)a;
	const Atividade *y = (const Atividade *)b;
	
	if(x->fim != y->fim){
		return (x->fim < y->fim) ?  -1: 1;
	}
	
	if(x->inicio !=  y->inicio){
		return (x->inicio < y ->inicio)? -1: 1;
	}
}

void selecao(Atividade arr[], int n){
	qsort(arr, n, sizeof(Atividade), comparar);
	
	int ultimoSelecionada = 0;
	int contQs = 1;
	int j;
	printf("\n%s [%d %d]", arr[ultimoSelecionada].id, arr[ultimoSelecionada].inicio, arr[ultimoSelecionada].fim);
	for(j = 1; j<n; j++){
		if(arr[j].inicio >= arr[ultimoSelecionada].inicio)
		printf("\n%s: [%d %d] - Selecionada", arr[j].id, arr[j].inicio, arr[j]);
	}
	
}

int main() {
      int n;

    if (scanf("%d ", &n) != 1 || n < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

	 	Atividade *arr = malloc(sizeof(Atividade));
	 	if(arr == NULL && n > 0){
	 		return 1;
		 }
      int i;
       for (i = 0; i < n; i++) {
        if (scanf("4%s %d %d", arr[i].id, &arr[i].inicio, &arr[i].fim) != 3) {
            printf("Erro ao ler a atividade %d.\n", i + 1);
            free(arr);
            return 1;
        }
    }
    
    selecao(arr, n);
    
    free(arr);
}
