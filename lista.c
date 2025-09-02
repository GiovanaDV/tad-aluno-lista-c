#include <stdio.h>
#include "lista.h"

void inicializarLista(Lista *l) {
    l->tamanho = 0;
}

int inserirAluno(Lista *l, Aluno a) {
    if (l->tamanho < MAX) {
        l->dados[l->tamanho] = a;
        l->tamanho++;
        return 1; // sucesso
    }
    return 0; // falha
}

void imprimirLista(Lista l) {
    for (int i = 0; i < l.tamanho; i++) {
        imprimirAluno(l.dados[i]);
    }
}

int buscarAlunoPorRM(Lista l, int rm) {
    for (int i = 0; i < l.tamanho; i++) {
        if (l.dados[i].rm == rm) {
            return i; // aluno encontrado
        }
    }
    return -1; // aluno não encontrado
}