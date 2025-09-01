#include <stdio.h>
#include <string.h>
#include "aluno.h"
#include "lista.h"
Aluno criarAluno(const char *nome, int rm, float nota) {
    Aluno a;
    strncpy(a.nome, nome, sizeof(a.nome));
    a.rm = rm;
    a.nota = nota;
    return a;
}
void imprimirAluno(Aluno a) {
    printf("Nome: %s | RM: %d | Nota: %.2f\n", a.nome, a.rm, a.nota);
}

void alterarNota(Aluno *a, float novaNota) {
    a->nota = novaNota;
}

void removerUltimo(Lista *l) {
    if (l->tamanho > 0) {
        l->tamanho--;
    }
}