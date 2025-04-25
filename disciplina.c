#include <stdio.h>
#include <string.h>
#include "disciplina.h"

// Função para cadastrar nova disciplina
void CadastrarDisciplina(Disciplina disciplinas[], int *qtdDisciplinas) {
    if (*qtdDisciplinas >= MAX_ALUNOS) {
        printf("Limite de disciplinas atingido.\n");
        return;
    }

    printf("\n--- Cadastro de Disciplina ---\n");

    printf("Nome da disciplina: ");
    fgets(disciplinas[*qtdDisciplinas].nome, 100, stdin);
    disciplinas[*qtdDisciplinas].nome[strcspn(disciplinas[*qtdDisciplinas].nome, "\n")] = '\0';

    printf("Código da disciplina: ");
    fgets(disciplinas[*qtdDisciplinas].codigo, 10, stdin);
    disciplinas[*qtdDisciplinas].codigo[strcspn(disciplinas[*qtdDisciplinas].codigo, "\n")] = '\0';

    printf("Semestre: ");
    scanf("%d", &disciplinas[*qtdDisciplinas].semestre);
    getchar(); // Limpar o buffer

    printf("Nome do professor: ");
    fgets(disciplinas[*qtdDisciplinas].professor, 100, stdin);
    disciplinas[*qtdDisciplinas].professor[strcspn(disciplinas[*qtdDisciplinas].professor, "\n")] = '\0';

    disciplinas[*qtdDisciplinas].qtdAlunos = 0; // Inicializa a quantidade de alunos matriculados como 0

    (*qtdDisciplinas)++;
    printf("Disciplina cadastrada com sucesso!\n");
}

// Função para matricular aluno em disciplina
void MatricularAlunoEmDisciplina(Disciplina disciplinas[], int qtdDisciplinas, Aluno alunos[], int qtdAlunos) {
    int i, matricula, disciplinaEscolhida;

    printf("\n--- Matricular Aluno em Disciplina ---\n");

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula);
    getchar();

    // Verifica se a matrícula do aluno existe
    int alunoExistente = 0;
    for (i = 0; i < qtdAlunos; i++) {
        if (alunos[i].matricula == matricula) {
            alunoExistente = 1;
            break;
        }
    }

    if (!alunoExistente) {
        printf("Aluno não encontrado!\n");
        return;
    }

    printf("Escolha a disciplina para matricular o aluno (0 a %d): ", qtdDisciplinas - 1);
    for (i = 0; i < qtdDisciplinas; i++) {
        printf("\n%d - %s", i, disciplinas[i].nome);
    }

    printf("\nEscolha uma disciplina: ");
    scanf("%d", &disciplinaEscolhida);
    getchar();

    if (disciplinaEscolhida < 0 || disciplinaEscolhida >= qtdDisciplinas) {
        printf("Disciplina inválida!\n");
        return;
    }

    // Matricula o aluno na disciplina
    if (disciplinas[disciplinaEscolhida].qtdAlunos >= MAX_ALUNOS) {
        printf("Limite de alunos matriculados na disciplina atingido.\n");
        return;
    }

    disciplinas[disciplinaEscolhida].alunosMatriculados[disciplinas[disciplinaEscolhida].qtdAlunos] = matricula;
    disciplinas[disciplinaEscolhida].qtdAlunos++;

    printf("Aluno matriculado na disciplina %s com sucesso!\n", disciplinas[disciplinaEscolhida].nome);
}
