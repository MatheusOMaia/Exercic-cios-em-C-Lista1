#include <stdio.h>
#include <locale.h>
/*9) Escreva um programa que leia 3 notas de um aluno e a m�dia (ME) das notas dosexerc�cios realizados por ele.
Calcular a m�dia de aproveitamento, usando a f�rmula: MA =(N1 + N2*2 + N3*3 + ME)/7.
A partir da m�dia, informar o conceito de acordo com a tabela:
(0,1)maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/


int main(){
	
	setlocale(0,"Portuguese");
	
	float nota[3],me,ma;
	int i;
		
		
		for(i = 0;i<3;i++){	
			printf("Digite as 3 notas do aluno\n");
			scanf("%f",&nota[i]);
			
			printf("Nota %d: %.2f\n",i + 1,nota[i]);
		}
		
		me = (nota[0] + nota[1] + nota[3])/3;
		ma = (nota[0] + nota[1]*2 + nota[2]*3 + me)/7;
	
	
		if(ma >= 9)	
			printf("M�dia de aproveitamento foi: A");
		else if(ma >= 7.5 && ma < 9)
			printf("M�dia de aproveitamento foi: B");
		else if(ma >= 6 && ma < 7.5)
			printf("M�dia de aproveitamento foi: C");
		else if(ma >= 4 && ma < 6)
			printf("M�dia de aproveitamento foi: D");
		else
			printf("M�dia de aproveitamento foi: E");
			
	}
