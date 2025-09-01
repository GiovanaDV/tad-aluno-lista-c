#include <stdio.h>
#include "aluno.h"
#include "lista.h"

int main() {
    Aluno a1 = criarAluno("Maria", 559087, 8.5);
    Aluno a2 = criarAluno("João", 558761, 7.0);

    Lista turma;
    inicializarLista(&turma);

    // Insere os alunos na lista
    inserirAluno(&turma, a1);
    inserirAluno(&turma, a2);

    // Imprime a lista completa
    printf("Lista de alunos:\n");
    imprimirLista(turma);

    return 0;
}