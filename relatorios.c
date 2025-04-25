#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "relatorios.h"

void ListarAlunos(Aluno alunos[], int qtdAlunos) {
    if (qtdAlunos == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    for (int i = 0; i < qtdAlunos; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Data de Nascimento: %s\n", alunos[i].dataNascimento);
        printf("Sexo: %c\n", alunos[i].sexo);
        printf("CPF: %s\n", alunos[i].cpf);
        printf("-----------------------------\n");
    }
}

void ListarProfessores(Professor professores[], int qtdProfessores) {
    if (qtdProfessores == 0) {
        printf("Nenhum professor cadastrado.\n");
        return;
    }

    for (int i = 0; i < qtdProfessores; i++) {
        printf("Nome: %s\n", professores[i].nome);
        printf("Matrícula: %d\n", professores[i].matricula);
        printf("Data de Nascimento: %s\n", professores[i].dataNascimento);
        printf("Sexo: %c\n", professores[i].sexo);
        printf("CPF: %s\n", professores[i].cpf);
        printf("-----------------------------\n");
    }
}

void ListarDisciplinas(Disciplina disciplinas[], int qtdDisciplinas) {
    if (qtdDisciplinas == 0) {
        printf("Nenhuma disciplina cadastrada.\n");
        return;
    }

    for (int i = 0; i < qtdDisciplinas; i++) {
        printf("Nome: %s\n", disciplinas[i].nome);
        printf("Código: %s\n", disciplinas[i].codigo);
        printf("Semestre: %d\n", disciplinas[i].semestre);
        printf("Professor: %s\n", disciplinas[i].professor);
        printf("-----------------------------\n");
    }
}

void ListarDisciplinaComAlunos(Disciplina disciplinas[], int qtdDisciplinas) {
    if (qtdDisciplinas == 0) {
        printf("Nenhuma disciplina cadastrada.\n");
        return;
    }

    for (int i = 0; i < qtdDisciplinas; i++) {
        printf("Nome da Disciplina: %s\n", disciplinas[i].nome);
        printf("Código: %s\n", disciplinas[i].codigo);
        printf("Semestre: %d\n", disciplinas[i].semestre);
        printf("Professor: %s\n", disciplinas[i].professor);
        printf("Alunos Matriculados:\n");

        if (disciplinas[i].qtdAlunos == 0) {
            printf("Nenhum aluno matriculado.\n");
        } else {
            for (int j = 0; j < disciplinas[i].qtdAlunos; j++) {
                printf("Aluno Matrícula: %d\n", disciplinas[i].alunosMatriculados[j]);
            }
        }
        printf("-----------------------------\n");
    }
}

void ListarAlunosPorSexo(Aluno alunos[], int qtdAlunos) {
    char sexoEscolhido;
    printf("Escolha o sexo (M/F): ");
    scanf(" %c", &sexoEscolhido);

    int encontrado = 0;
    for (int i = 0; i < qtdAlunos; i++) {
        if (alunos[i].sexo == sexoEscolhido) {
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Data de Nascimento: %s\n", alunos[i].dataNascimento);
            printf("Sexo: %c\n", alunos[i].sexo);
            printf("CPF: %s\n", alunos[i].cpf);
            printf("-----------------------------\n");
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum aluno encontrado com o sexo escolhido.\n");
    }
}

void ListarAlunosOrdenadosPorNome(Aluno alunos[], int qtdAlunos) {
    // Ordenação por nome
    for (int i = 0; i < qtdAlunos - 1; i++) {
        for (int j = i + 1; j < qtdAlunos; j++) {
            if (strcmp(alunos[i].nome, alunos[j].nome) > 0) {
                Aluno temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }

    ListarAlunos(alunos, qtdAlunos);
}

void ListarAlunosOrdenadosPorDataNascimento(Aluno alunos[], int qtdAlunos) {
    // Ordenação por data de nascimento
    for (int i = 0; i < qtdAlunos - 1; i++) {
        for (int j = i + 1; j < qtdAlunos; j++) {
            if (strcmp(alunos[i].dataNascimento, alunos[j].dataNascimento) > 0) {
                Aluno temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }

    ListarAlunos(alunos, qtdAlunos);
}

void ListarProfessoresPorSexo(Professor professores[], int qtdProfessores) {
    char sexoEscolhido;
    printf("Escolha o sexo (M/F): ");
    scanf(" %c", &sexoEscolhido);

    int encontrado = 0;
    for (int i = 0; i < qtdProfessores; i++) {
        if (professores[i].sexo == sexoEscolhido) {
            printf("Nome: %s\n", professores[i].nome);
            printf("Matrícula: %d\n", professores[i].matricula);
            printf("Data de Nascimento: %s\n", professores[i].dataNascimento);
            printf("Sexo: %c\n", professores[i].sexo);
            printf("CPF: %s\n", professores[i].cpf);
            printf("-----------------------------\n");
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum professor encontrado com o sexo escolhido.\n");
    }
}

void ListarProfessoresOrdenadosPorNome(Professor professores[], int qtdProfessores) {
    // Ordenação por nome
    for (int i = 0; i < qtdProfessores - 1; i++) {
        for (int j = i + 1; j < qtdProfessores; j++) {
            if (strcmp(professores[i].nome, professores[j].nome) > 0) {
                Professor temp = professores[i];
                professores[i] = professores[j];
                professores[j] = temp;
            }
        }
    }

    ListarProfessores(professores, qtdProfessores);
}

void ListarProfessoresOrdenadosPorDataNascimento(Professor professores[], int qtdProfessores) {
    // Ordenação por data de nascimento
    for (int i = 0; i < qtdProfessores - 1; i++) {
        for (int j = i + 1; j < qtdProfessores; j++) {
            if (strcmp(professores[i].dataNascimento, professores[j].dataNascimento) > 0) {
                Professor temp = professores[i];
                professores[i] = professores[j];
                professores[j] = temp;
            }
        }
    }

    ListarProfessores(professores, qtdProfessores);
}

void AniversariantesDoMes(Aluno alunos[], int qtdAlunos, int mes) {
    int encontrou = 0;
    for (int i = 0; i < qtdAlunos; i++) {
        int alunoMes = atoi(strtok(alunos[i].dataNascimento, "/"));
        if (alunoMes == mes) {
            printf("Nome: %s\n", alunos[i].nome);
            printf("Data de Nascimento: %s\n", alunos[i].dataNascimento);
            printf("-----------------------------\n");
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhum aniversariante encontrado para o mês %d.\n", mes);
    }
}

void BuscarPessoaPorSubstringNoNome(Aluno alunos[], int qtdAlunos, Professor professores[], int qtdProfessores, char substring[]) {
    int encontrou = 0;
    // Buscar em alunos
    for (int i = 0; i < qtdAlunos; i++) {
        if (strstr(alunos[i].nome, substring) != NULL) {
            printf("Aluno: %s\n", alunos[i].nome);
            encontrou = 1;
        }
    }
    // Buscar em professores
    for (int i = 0; i < qtdProfessores; i++) {
        if (strstr(professores[i].nome, substring) != NULL) {
            printf("Professor: %s\n", professores[i].nome);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhuma pessoa encontrada com a substring \"%s\".\n", substring);
    }
}

void ListarAlunosComMenosDe3Disciplinas(Disciplina disciplinas[], int qtdDisciplinas, Aluno alunos[], int qtdAlunos) {
    int alunoDisciplinas[MAX] = {0};
    for (int i = 0; i < qtdDisciplinas; i++) {
        for (int j = 0; j < disciplinas[i].qtdAlunos; j++) {
            alunoDisciplinas[disciplinas[i].alunosMatriculados[j]]++;
        }
    }

    for (int i = 0; i < qtdAlunos; i++) {
        if (alunoDisciplinas[alunos[i].matricula] < 3) {
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Número de disciplinas: %d\n", alunoDisciplinas[alunos[i].matricula]);
            printf("-----------------------------\n");
        }
    }
}

void ListarDisciplinasComMaisDe40Alunos(Disciplina disciplinas[], int qtdDisciplinas) {
    for (int i = 0; i < qtdDisciplinas; i++) {
        if (disciplinas[i].qtdAlunos > 40) {
            printf("Nome: %s\n", disciplinas[i].nome);
            printf("Código: %s\n", disciplinas[i].codigo);
            printf("Semestre: %d\n", disciplinas[i].semestre);
            printf("Professor: %s\n", disciplinas[i].professor);
            printf("Número de alunos matriculados: %d\n", disciplinas[i].qtdAlunos);
            printf("-----------------------------\n");
        }
    }
}

void ExibirMenuRelatorios(Aluno alunos[], int qtdAlunos, Professor professores[], int qtdProfessores, Disciplina disciplinas[], int qtdDisciplinas) {
    int opcao;
    do {
        printf("\n===== MENU DE RELATÓRIOS =====\n");
        printf("1. Listar Alunos\n");
        printf("2. Listar Professores\n");
        printf("3. Listar Disciplinas\n");
        printf("4. Listar Disciplinas com Alunos\n");
        printf("5. Listar Alunos por Sexo\n");
        printf("6. Listar Alunos Ordenados por Nome\n");
        printf("7. Listar Alunos Ordenados por Data de Nascimento\n");
        printf("8. Listar Professores por Sexo\n");
        printf("9. Listar Professores Ordenados por Nome\n");
        printf("10. Listar Professores Ordenados por Data de Nascimento\n");
        printf("11. Aniversariantes do Mês\n");
        printf("12. Buscar Pessoa por Substring no Nome\n");
        printf("13. Listar Alunos com Menos de 3 Disciplinas\n");
        printf("14. Listar Disciplinas com Mais de 40 Alunos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                ListarAlunos(alunos, qtdAlunos);
                break;
            case 2:
                ListarProfessores(professores, qtdProfessores);
                break;
            case 3:
                ListarDisciplinas(disciplinas, qtdDisciplinas);
                break;
            case 4:
                ListarDisciplinaComAlunos(disciplinas, qtdDisciplinas);
                break;
            case 5:
                ListarAlunosPorSexo(alunos, qtdAlunos);
                break;
            case 6:
                ListarAlunosOrdenadosPorNome(alunos, qtdAlunos);
                break;
            case 7:
                ListarAlunosOrdenadosPorDataNascimento(alunos, qtdAlunos);
                break;
            case 8:
                ListarProfessoresPorSexo(professores, qtdProfessores);
                break;
            case 9:
                ListarProfessoresOrdenadosPorNome(professores, qtdProfessores);
                break;
            case 10:
                ListarProfessoresOrdenadosPorDataNascimento(professores, qtdProfessores);
                break;
            case 11: {
                int mes;
                printf("Digite o mês para ver os aniversariantes: ");
                scanf("%d", &mes);
                AniversariantesDoMes(alunos, qtdAlunos, mes);
                break;
            }
            case 12: {
                char substring[100];
                printf("Digite a substring a ser buscada no nome: ");
                scanf(" %99[^\n]", substring);  // Lê até 99 caracteres
                BuscarPessoaPorSubstringNoNome(alunos, qtdAlunos, professores, qtdProfessores, substring);
                break;
            }
            case 13:
                ListarAlunosComMenosDe3Disciplinas(disciplinas, qtdDisciplinas, alunos, qtdAlunos);
                break;
            case 14:
                ListarDisciplinasComMaisDe40Alunos(disciplinas, qtdDisciplinas);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}