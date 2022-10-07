#include <stdio.h>
#include <locale.h>
/*18) Faça um programa C que leia dez números que representam as notas de dez alunos deuma disciplina. 
As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. 
Assuma que as notas são informadas corretamente no intervalo de 1 a 10.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	float notas[10],maior = 0,menor = 10,soma = 0;
	int i;
	
		
		
		for(i=0;i<10;i++){
			
			printf("Digite as notas de 10 alunos: ");
			scanf("%f",&notas[i]);
			
			
			soma = soma + notas[i];
			
			if(notas[i] > maior)
			maior = notas[i];
			if(notas[i] < menor)
			menor = notas[i];
			
			
			
		}
		printf("A maior nota entre os alunos foi %.2f\n",maior);	
		printf("A menor nota entre os alunos foi %.2f",menor);	
		printf("A Soma %.2f",soma);
		printf("A Média das 10 notas é %.2f",soma/10);
			
	}
