#include <stdio.h>
#include <string.h>

#include "professor.h"

void PreencherDadosComunsProf(char nome[], char dataNascimento[], char sexo, char cpf[]) {
    printf("Nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Data de Nascimento (dd/mm/aaaa): ");
    fgets(dataNascimento, 11, stdin);
    dataNascimento[strcspn(dataNascimento, "\n")] = '\0';

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);
    getchar();

    printf("CPF: ");
    fgets(cpf, 12, stdin);
    cpf[strcspn(cpf, "\n")] = '\0';
}

void CadastrarProfessor(Professor professores[], int *qtdProfessores) {
    if (*qtdProfessores >= MAX_PROFESSORES) {
        printf("Limite de professores atingido.\n");
        return;
    }

    printf("\n--- Cadastro de Professor ---\n");

    printf("Matrícula: ");
    scanf("%d", &professores[*qtdProfessores].matricula);
    getchar();

    PreencherDadosComunsProf(professores[*qtdProfessores].nome,
                             professores[*qtdProfessores].dataNascimento,
                             professores[*qtdProfessores].sexo,
                             professores[*qtdProfessores].cpf);

    (*qtdProfessores)++;
    printf("Professor cadastrado com sucesso!\n");
}
