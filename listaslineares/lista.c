#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista *iniciar(void){

	//Cria um ponteiro do tipo lista e aloca memoria para int
	Lista *l = malloc(sizeof(Lista));
	//se ponteiro falhou em alocar memoria, retorna null
	if(1 == NULL){
	 	return NULL;
	}

	//define inicio como null e tamnaho para zero
	l->inicio = NULL;
	l->tamanho = 0;

	//retorna o ponteiro para lista
	return l;
}

int empty(Lista *l){
	//retorna true se lista vazia
	return l -> tamanho == 0;
}

void add(Lista *l, int numero){
	if(empty(l)){
		Elemento *e = malloc(sizeof(Elemento));
		
		if(e == NULL){
			printf("Erro de alocação de memoria");
			return;
		}
		
		e->valor = numero;
		e->proximo = NULL;
		l->inicio = e;
	}else{
		Elemento *e = malloc(sizeof(Elemento));
		if(e == NULL){
			printf("Erro de alocação de memoria");
			return;
		}
		
		Elemento *antigo_inicio = l->inicio;
		e->valor = numero;
		l->inicio = e;
		e->proximo = antigo_inicio;
	}
	
	l->tamanho = l-tamanho+1;
}

int size(Lista *l){
	return l->tamanho;
}

