#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "aluno.h"

#define MAX_ALUNOS 100

typedef struct {
    char nome[100];
    char codigo[10];
    int semestre;
    char professor[100];
    int alunosMatriculados[MAX_ALUNOS]; // Matrículas dos alunos matriculados
    int qtdAlunos; // Quantidade de alunos matriculados
} Disciplina;

// Função para cadastrar nova disciplina
void CadastrarDisciplina(Disciplina disciplinas[], int *qtdDisciplinas);

// Função para matricular aluno em uma disciplina
void MatricularAlunoEmDisciplina(Disciplina disciplinas[], int qtdDisciplinas, Aluno alunos[], int qtdAlunos);

#endif
