#include <stdio.h>
#include <locale.h>
/*13) Dado um número positivo, 
crie um programa que escreva todos os números ímparesmenores e/ou iguais a esse número e maiores ou igual a um.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int numero, i;
		
		printf("Digite um número positivo para saber todos os números ímpares menores e/ou iguais a esse número e maiores ou igual a um:");
		scanf("%d",&numero);
		
		for(i = 1; i < numero ; i=i+2){
			printf("%d\n",i);
		}
		if(numero %2)
		printf("%d",numero);	
			
	}
