/*
 * lista.h
 * Header de definicao da ED Lista Simples.
 * Author: BBFL
 */

#pragma once

#ifndef LISTA_H
#define LISTA_H

/*
 * Estrutura que representa cada elemento da lista.
 * Cada elemento armazena:
 * - um valor inteiro;
 * - um ponteiro para o proximo elemento.
 */
 
typedef struct elemento {
    int valor;
    struct elemento *proximo;
} Elemento;

/*
 * Estrutura que representa a lista.
 * A lista mantem:
 * - um ponteiro para o primeiro elemento;
 * - a quantidade atual de elementos.
 */
 
typedef struct {
    Elemento *inicio;
    int tamanho;
} Lista;

/* Criacao da lista */
Lista *iniciar(void);

/* Verificacao */
int empty(Lista *l);

/* Insercao no inicio */
void add(Lista *l, int numero);

/* Consulta por posicao */
int get(Lista *l, int posicao);

/* Quantidade de elementos */
int size(Lista *l);

/* Exibicao */
void exibir(Lista *l);

/* Insercao em posicao especifica */
void add_pos(Lista *l, int numero, int posicao);

/* Alteracao em posicao especifica */
void set(Lista *l, int numero, int posicao);

/* Remocao em posicao especifica */
int delete(Lista *l, int posicao);

/* Liberacao de toda a memoria ocupada pela lista */
void liberar(Lista *l);

#endif;
