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
	//chama a função empty para verficar se lista é vazia (true ou false)
	if(empty(l)){
		//aloca um espaco para um novo elemento
		Elemento *e = malloc(sizeof(Elemento));
		
		//se falhar na alocação de memoria retorna erro
		if(e == NULL){
			printf("Erro de alocação de memoria");
			return;
		}
		//define que valor dentro do elemento e é igual ao numero(valor inserido na função)
		e->valor = numero;
		
		//define que o proximo é nulo
		e->proximo = NULL;
		
		//define o inicio da lista como o endereço de memoria apontado por e
		l->inicio = e;
	}else{
		
		//caso lista nao esteja vazia ele define tambem um espaco de memoria pro novo elemento
		Elemento *e = malloc(sizeof(Elemento));
		
		//se alocação falhar retorna o erro
		if(e == NULL){
			printf("Erro de alocação de memoria");
			return;
		}
		
		//define um novo elemento que é apontado por antigo inicio, o valor dele sendo o inicio definido na lista no momento
		Elemento *antigo_inicio = l->inicio;
		
		//define o valor do elemento novo como o valor inserido pelo usuario
		e->valor = numero;
		
		//defne o ponteiro do inicio da lista como sendo esse novo valor inserido
		l->inicio = e;
		
		//define o proximo elemento desse elemento inserido como o antigo inicio definido
		e->proximo = antigo_inicio;
	}
	//aumenta o tamanho da variavel inicio
	l->tamanho = l-tamanho+1;
}

int size(Lista *l){
	//retorna o tamanho da lista
	return l->tamanho;
}

