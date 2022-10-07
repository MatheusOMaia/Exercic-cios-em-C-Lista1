#include <stdio.h>
#include <locale.h>
/*10) Faça um programa que receba um número inteiro e que verifique se esse número é parou ímpar.
O programa deve informar se o número é par,
caso afirmativo informar também seé ou não maior que 15 ou se o número é ímpar,
 caso afirmativo informar se é ou não menorque 50. */


int main(){
	
	setlocale(0,"Portuguese");
	int numero;
		
		

		printf("Digite um número para saber se ele é par ou ímpar\n");
		scanf("%d",&numero);

		if(numero % 2 == 0){
			printf("Esse número é par\n");
		
			if(numero < 15)
			printf("%d é menor que 15",numero);
			else
			printf("%d é maior que 15",numero);		
		}
		else{
			printf("Esse número é ímpar\n");
				
			if(numero < 50)
			printf("%d é menor que 50",numero);
			else
			printf("%d é maior que 50",numero);	
		}
		
	}
