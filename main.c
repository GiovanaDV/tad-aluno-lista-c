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

    // Altera as notas dos alunos dentro da lista
    alterarNota(&turma.dados[0], 9.0);
    alterarNota(&turma.dados[1], 8.0);

    printf("\nLista de alunos após alteração de notas:\n");
    imprimirLista(turma);

    // Remove o último aluno da lista
    removerUltimo(&turma);
    printf("\nLista de alunos após remoção do último aluno:\n");
    imprimirLista(turma);
    
    int rmProcurado = 558761;
    int indice = buscarAlunoPorRM(turma, rmProcurado);

    printf("\nBuscando aluno com RM %d:\n", rmProcurado);
    if (indice != -1) {
        imprimirAluno(turma.dados[indice]);
    } else {
        printf("Aluno não encontrado!\n");
    }
    
    return 0;
}