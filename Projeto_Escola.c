#include <stdio.h>
#include "aluno.h"
#include "professor.h"
#include "disciplina.h"
#include "relatorios.h"

#define MAX 100  // Defina o número máximo

int main() {
    Aluno alunos[MAX];
    Professor professores[MAX];
    Disciplina disciplinas[MAX];
    int qtdAlunos = 0;
    int qtdProfessores = 0;
    int qtdDisciplinas = 0;

    int opcao;
    int sair = 0;

    while (!sair) {
        printf("\n--- Projeto Escola ---\n");
        printf("1 - Aluno\n");
        printf("2 - Professor\n");
        printf("3 - Disciplina\n");
        printf("4 - Matricular Aluno em Disciplina\n");
        printf("5 - Módulo de Relatórios\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();  // Limpa o buffer

        switch (opcao) {
            case 0:
                sair = 1;
                break;

            case 1:
                printf("\n--- Módulo Aluno ---\n");
                CadastrarAluno(alunos, &qtdAlunos);
                break;

            case 2:
                printf("\n--- Módulo Professor ---\n");
                CadastrarProfessor(professores, &qtdProfessores);
                break;

            case 3:
                printf("\n--- Módulo Disciplina ---\n");
                CadastrarDisciplina(disciplinas, &qtdDisciplinas);
                break;

            case 4:
                printf("\n--- Matricular Aluno em Disciplina ---\n");
                MatricularAlunoEmDisciplina(disciplinas, qtdDisciplinas, alunos, qtdAlunos);
                break;
            
            case 5:
                printf("\n--- Módulo de Relatórios ---\n");
                ExibirMenuRelatorios(alunos, qtdAlunos, professores, qtdProfessores, disciplinas, qtdDisciplinas);
                break;

            default:
                printf("Opção Inválida\n");
                break;
        }
    }

    return 0;
}
