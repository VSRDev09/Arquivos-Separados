#ifndef PROFESSOR_H
#define PROFESSOR_H

#define MAX_PROFESSORES 100

typedef struct {
    int matricula;
    char nome[100];
    char dataNascimento[11];
    char sexo;
    char cpf[12];
} Professor;

void CadastrarProfessor(Professor professores[], int *qtdProfessores);
void PreencherDadosComunsProf(char nome[], char dataNascimento[], char sexo, char cpf[]);

#endif
