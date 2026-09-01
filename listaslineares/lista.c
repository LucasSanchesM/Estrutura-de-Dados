#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

Lista*iniciar(void){
	//Aloca espaco pra lista
	Lista *l = malloc(sizeof(Lista));
	
	//Verifica se alocacao falhou, se sim retorna null
	if (l == NULL){
		return NULL;
	}
	//define o primeiro elemento como null(ainda nao existe)
	l-> inicio = NULL;
	l->tamanho = 0;
	
	return l;
}

int empty(Lista * l){
	//Retorna true se tamanho == 0, e false caso contrario
	return l-> tamanho ==0;
	
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
	l->tamanho = l->tamanho+1;
}
int size(Lista *l){
	return l->tamanho;
}

/* Insercao em posicao especifica */
void add_pos(Lista *l, int numero, int posicao){
	//se vazio retorna que esta vazia
	if(empty(l)){
		printf("lista vazia; nao e permitido insercao");
		return;
	}
	//Se posicao alem do limite ou negativa retorna o erro
	if(posicao > l-> tamanho || posicao <= 0){
		printf("Posicao invalida");
		return;
	}
	//Se posicao a ser adicionada for a primeira so chama o add
	if(posicao == 1){
		add(l, numero);
		return;
	}
	
	//Define o elemento atual como o primeiro da lista, ele será usado para encontrar a posicao desejada
	Elemento *e_atual = l->inicio;
	//elemento anterior que inicialmente é null
	Elemento *e_anterior = NULL;
	//Aloca um espaço de memoria pro elemento a ser inserido
	Elemento *e = malloc(sizeof(Elemento));

	//se alocação falhar informa
	if(e == NULL){
		printf("Erro na alocacao");
		return;
	}
	
	//Procura o elemento da posição desejada e torna o elemento anterior apontando pro elemento a ser inserido, e o atual aponta pro proximo (novo elemento)
	e->valor = numero;
	int i;
	for(i = 1; i<posicao; i++){
		e_anterior = e_atual;
		e_atual = e_atual->proximo;
	}
	e_anterior->proximo = e;
	e->proximo = e_atual;
	l->tamanho = l->tamanho + 1;
}

int get(Lista *l, int posicao){
	if(empty(l)){
		printf("Lista vazia");
		return -1;
	}
	if(posicao > l->tamanho || posicao <=0){
		printf("Posicao invalida");
		return -1;
	}
	int i = 1;
	Elemento *e  = l->inicio;   
	while(e!=NULL){
		if(i == posicao){
			return e->valor;
		}
		e = e->proximo;
		i++;
	}
	return -1;
}
void set(Lista *l, int numero, int posicao){
	if(empty(l)){
		printf("Lista vazia");
	}
	if(posicao > l->tamanho || posicao <=0){
		printf("Posicao invalida");
	}
	
	Elemento *e = l->inicio;
	int i = 1;
	while(e!=NULL){
		if(i == posicao){
			e->valor = numero;
		}
		e = e->proximo;
		i++;
	}
	
}


void exibir(Lista *l){
	if(empty(l)){
		printf("Lista vazia");
		return;
	}
	Elemento *e = l->inicio;
	
	while(e != NULL){
		printf("%3d", e->valor);
		e = e->proximo;	
	}
}

/* Remocao em posicao especifica */
int delete(Lista *l, int posicao){
	if(empty(l)){
		printf("Lista vazia");
		return;
	}
	if(posicao > l->tamanho || posicao <=0){
		printf("Posicao invalida");
		return;
	}
	
	if(posicao ==1){
		Elemento *e = l->inicio;
		int numero = e->valor;
		l->inicio = l->inicio->proximo;
		l->tamanho = l->tamanho -1;
		free(e);
		return numero;
	}
	
	int i;
	Elemento *e_anterior = NULL;
	Elemento *e_atual = l->inicio;
	
	for(i = 1; i<posicao; i++){
		e_anterior = e_atual;
		e_atual = e_atual->proximo;
	}
	int num = e_atual->valor;
	e_anterior->proximo = e_atual->proximo;
	free(e_atual);
}


/* Liberacao de toda a memoria ocupada pela lista */
void liberar(Lista *l){
	if(l==NULL){
		return;
	}
	
	Elemento *atual = l->inicio;
	
	while(atual!=NULL){
		Elemento *proximo  = atual->proximo;
		free(atual);
		atual = proximo;
	}
	free(l);
}


