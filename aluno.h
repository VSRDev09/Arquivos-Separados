#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOS 100

typedef struct {
    int matricula;
    char nome[100];
    char dataNascimento[11];
    char sexo;
    char cpf[12];
} Aluno;

void CadastrarAluno(Aluno alunos[], int *qtdAlunos);
void PreencherDadosComuns(char nome[], char dataNascimento[], char *sexo, char cpf[]);

#endif
