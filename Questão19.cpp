#include <stdio.h>
#include <locale.h>
/*19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro. */


int main(){
	
	setlocale(0,"Portuguese");
	
	int i,vetor[5],maior;
		
		for(i=0;i<5;i++){
			printf("Digite um número inteiro: ");
			scanf("%d",&numero[i]);
		}
		
		maior = numero[0];
		for(i=0;i<5;i++){
			if(numero[i] > maior)
			maior = i;
		}
			
		printf("O maior elemento do vetor é o vetor[%d]",maior);
			
			
			
	}

