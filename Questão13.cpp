#include <stdio.h>
#include <locale.h>
/*13) Dado um n?mero positivo, 
crie um programa que escreva todos os n?meros ?mparesmenores e/ou iguais a esse n?mero e maiores ou igual a um.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int numero, i;
		
		printf("Digite um n?mero positivo para saber todos os n?meros ?mpares menores e/ou iguais a esse n?mero e maiores ou igual a um:");
		scanf("%d",&numero);
		
		for(i = 1; i < numero ; i=i+2){
			printf("%d\n",i);
		}
		if(numero %2)
		printf("%d",numero);	
			
	}
