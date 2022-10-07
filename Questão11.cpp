#include <stdio.h>
#include <locale.h>
/*11) Codifique um programa que leia a quantidade de alunas e de alunos.
Depois esseprograma deve informar se essa turma possui mais alunos ou mais alunas.
Se essa turmapossuir a quantidade de alunas maior que a de alunos,
informe o total de alunos dessa turma.O programa deve verificar se a quantidade de alunos é igual a de alunas.*/


int main(){
	
	setlocale(0,"Portuguese");
	int alunos,alunas;
		
		

		printf("Quantas alunas há nessa turma\n");
		scanf("%d",&alunas);
		
		printf("Quantas alunos há nessa turma\n");
		scanf("%d",&alunos);

		if(alunas > alunos){
			printf("Essa turma tem mais alunas que alunos\n");
			
			printf("A quantidade total de estudantes nessa turma é %d",alunos + alunas);
		}
		else if(alunos > alunas)
		printf("Essa turma tem mais alunos que alunas");
		else
		printf("Essa sala tem a mesma quantidade de alunos e alunas");
		
	}
