#include <stdio.h>
#include <locale.h>
/*12) Desenvolva um programa para comparar a idade de Pedro,
de Joana e de Ismael einformar quem é o mais velho.
Considere que essas pessoas possuem idades diferentes.*/


int main(){
	
	setlocale(0,"Portuguese");
	int idade[3];
		
		

		printf("Qual a idade de Pedro?(Considere idades diferentes) ");
		scanf("%d",&idade[0]);
		
		printf("Qual a idade de Joana? ");
		scanf("%d",&idade[1]);
		
		printf("Qual a idade de Ismael? ");
		scanf("%d",&idade[2]);

		if(idade[0] > idade[1] && idade [0] > idade[2]) 
			printf("Pedro é o mais velho");			
		
		else if(idade[1] > idade[0] && idade [1] > idade[2])
			printf("Joana é a mais velha");	
			
		else if(idade[2] > idade[0] && idade [2] > idade[1])
			printf("Ismael é o mais velho");
		else
			printf("Você tinha um trabalho");	
	
	}
