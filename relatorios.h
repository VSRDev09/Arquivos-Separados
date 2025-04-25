#ifndef RELATORIOS_H
#define RELATORIOS_H
#include "aluno.h"
#include "professor.h"
#include "disciplina.h"
#define MAX 100



// Declarações das funções de relatório
void ExibirMenuRelatorios();
void ListarAlunos(Aluno alunos[], int qtdAlunos);
void ListarProfessores(Professor professores[], int qtdProfessores);
void ListarDisciplinas(Disciplina disciplinas[], int qtdDisciplinas);
void ListarDisciplinaComAlunos(Disciplina disciplinas[], int qtdDisciplinas);
void ListarAlunosPorSexo(Aluno alunos[], int qtdAlunos);
void ListarAlunosOrdenadosPorNome(Aluno alunos[], int qtdAlunos);
void ListarAlunosOrdenadosPorDataNascimento(Aluno alunos[], int qtdAlunos);
void ListarProfessoresPorSexo(Professor professores[], int qtdProfessores);
void ListarProfessoresOrdenadosPorNome(Professor professores[], int qtdProfessores);
void ListarProfessoresOrdenadosPorDataNascimento(Professor professores[], int qtdProfessores);
void AniversariantesDoMes(Aluno alunos[], int qtdAlunos, int mes);
void BuscarPessoaPorSubstringNoNome(Aluno alunos[], int qtdAlunos, Professor professores[], int qtdProfessores, char substring[]);
void ListarAlunosComMenosDe3Disciplinas(Disciplina disciplinas[], int qtdDisciplinas, Aluno alunos[], int qtdAlunos);
void ListarDisciplinasComMaisDe40Alunos(Disciplina disciplinas[], int qtdDisciplinas);

#endif // RELATORIOS_H
