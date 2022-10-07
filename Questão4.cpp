#include <stdio.h>
#include <locale.h>
/*4) Faça um programa que lê dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiroem ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int numero[2];
	
	
	printf("Digite dois números\n");
	scanf("%d %d",&numero[0],&numero[1]);
	
	if(numero[0] < numero[1]){
		printf("lista do número %d ao %d:\n",numero[0],numero[1]);
		while(numero[0] < numero[1]){
			printf("%d\n",numero[0]);
			numero[0] = numero[0] + 1;	
		}
		printf("%d\n",numero[1]);
	}
	else if(numero[0] > numero[1]){
		printf("lista do número %d ao %d:\n",numero[1],numero[0]);
		while(numero[0] > numero[1]){
			printf("%d\n",numero[1]);
			numero[1] = numero[1] + 1;	
		}
		printf("%d\n",numero[0]);
	}
	else
		printf("Valores iguais");
}
