#include <stdio.h>
#include <locale.h>
/*10) Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � parou �mpar.
O programa deve informar se o n�mero � par,
caso afirmativo informar tamb�m se� ou n�o maior que 15 ou se o n�mero � �mpar,
 caso afirmativo informar se � ou n�o menorque 50. */


int main(){
	
	setlocale(0,"Portuguese");
	int numero;
		
		

		printf("Digite um n�mero para saber se ele � par ou �mpar\n");
		scanf("%d",&numero);

		if(numero % 2 == 0){
			printf("Esse n�mero � par\n");
		
			if(numero < 15)
			printf("%d � menor que 15",numero);
			else
			printf("%d � maior que 15",numero);		
		}
		else{
			printf("Esse n�mero � �mpar\n");
				
			if(numero < 50)
			printf("%d � menor que 50",numero);
			else
			printf("%d � maior que 50",numero);	
		}
		
	}
