#include<stdio.h>
#include<stdlib.h>
#include"fila.h"

Fila *iniciar(void){
	Fila *f = malloc(sizeof(Fila));
	
	if(f == NULL){
		return NULL;
	}
	f->inicio = NULL;
	f->fim = NULL;
	f->tamanho = 0;
	
	return f;
}

int empty(Fila *f){
	return f->tamanho == 0;
}

void enqueue(Fila *f, int numero){
	Elemento *e = malloc(sizeof(Elemento));
	if(e == NULL){
		printf("Erro, alocação falhou\n");
		return;
	}
	e->valor = numero;
	e->proximo = NULL;
	
	if(empty(f)){
		f->inicio = e;
		f->fim = e; 
	}else{	
		f->fim->proximo = e;
		f->fim = e;	
	}
	f->tamanho = f->tamanho + 1;
}

int dequeue(Fila *f){
	if(empty(f)){
		printf("Fila vazia\n");
		return -1;
	}
	Elemento *e = f->inicio;
	int numero = e->valor;
	f->inicio = e->proximo;
	free(e);
	f->tamanho = f->tamanho - 1;
	
	return numero;
}


int front(Fila *f){
	if(empty(f)){
		printf("Fila vazia\n");
		return -1;
	}
	
	return f->inicio->valor;
}

int rear(Fila *f){
	if(empty(f)){
		printf("Fila vazia\n");
		return -1;
	}	
	
	return f->fim->valor;
}

int size(Fila *f){
	return f->tamanho;
}

void exibir(Fila *f){
	if(empty(f)){
		printf("Fila vazia\n");
		return;
	}
	
	Elemento *e = f->inicio;
	
	while(e != NULL){
		printf("| %d |", e->valor);
		
		if(e->proximo != NULL){
			printf(" -> ");
		}
		
		e = e->proximo;
	}
	printf("\n");
}

void liberar(Fila *f){
	if(f == NULL){
		return;
	}
	Elemento *e_atual = f->inicio;
	
	while(e_atual != NULL){
		Elemento *proximo = e_atual->proximo;
		free(e_atual);
		e_atual = proximo;
	}
	
	free(f);
}


