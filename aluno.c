#include <stdio.h>
#include <string.h>
#include "aluno.h"

void PreencherDadosComuns(char nome[], char dataNascimento[], char *sexo, char cpf[]) {
    printf("Nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Data de Nascimento (dd/mm/aaaa): ");
    fgets(dataNascimento, 11, stdin);
    dataNascimento[strcspn(dataNascimento, "\n")] = '\0';

    printf("Sexo (M/F): ");
    scanf(" %c", sexo);
    getchar();

    printf("CPF: ");
    fgets(cpf, 12, stdin);
    cpf[strcspn(cpf, "\n")] = '\0';
}

void CadastrarAluno(Aluno alunos[], int *qtdAlunos) {
    if (*qtdAlunos >= MAX_ALUNOS) {
        printf("Limite de alunos atingido.\n");
        return;
    }

    printf("\n--- Cadastro de Aluno ---\n");
    
    printf("Matrícula: ");
    scanf("%d", &alunos[*qtdAlunos].matricula);
    getchar();

    PreencherDadosComuns(alunos[*qtdAlunos].nome,
                         alunos[*qtdAlunos].dataNascimento,
                         &alunos[*qtdAlunos].sexo,
                         alunos[*qtdAlunos].cpf);

    (*qtdAlunos)++;
    printf("Aluno cadastrado com sucesso!\n");
}
