#ifndef LISTA_H
#define LISTA_H

#include "aluno.h"

#define MAX 100

typedef struct {
    Aluno dados[MAX];
    int tamanho;
} Lista;

// Operações da lista
void inicializarLista(Lista *l);
int inserirAluno(Lista *l, Aluno a);
void imprimirLista(Lista l);
void removerUltimo(Lista *l);
int buscarAlunoPorRM(Lista l, int rm);


#endif
