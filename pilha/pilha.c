#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

Pilha *iniciar(){
	Pilha *p = malloc(sizeof(Pilha));
	if(p == NULL){
		
		return NULL;
	}
	
	p->topo = NULL;
	p->tamanho = 0;
	return p;
}

int empty(Pilha *p){
	return p->tamanho == 0;
}

void push(Pilha *p, int numero){
	Elemento *e = malloc(sizeof(Elemento));
	if(e == NULL){
		printf("Erro ao criar o elemento:\n");
		return;
	}
	e->valor = numero;
	e->proximo = p->topo;
	p->topo = e;
	p->tamanho = p->tamanho + 1;
}

int pop(Pilha *p){
	if(empty(p)){
		printf("Pilha vazia");
		return -1;
	}
	Elemento *e = p->topo;
	int numero = e->valor;
	
	p->topo = e->proximo;
	
	free(e);
	p->tamanho = p->tamanho - 1;
	return numero;
}

int top(Pilha *p){
	if(empty(p)){
		printf("Pilha vazia:\n");
		return -1;
	}
	
	return p->topo->valor;
}

int size(Pilha *p){
	return p->tamanho;
}

void exibir(Pilha *p){
	if(empty(p)){
		printf("Pilha vazia:\n");
		return;
	}
	printf("\nPilha (topo->base): \n");
	Elemento *e = p->topo;
	while(e != NULL){
		printf("| %d |", e->valor);
		e = e->proximo;
	}
	printf("-------------\n");
}

void liberar(Pilha *p){
	if(p == NULL){
		return;
	}
	
	Elemento *e_atual = p->topo;
	
	while(e_atual!= NULL){
		Elemento *proximo = e_atual->proximo;
		free(e_atual);
		e_atual = proximo; 
	}
	free(p);
}


