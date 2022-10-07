#include <stdio.h>
#include <locale.h>
/*22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene essesdez números em um vetor. 
Para os valores dos elementos inseridos nas posições pares dessevetor, calcule o somatório deles, 
para os demais calcule a subtração desses valores. Emseguida, o programa deverá apresentar na tela os resultados.*/

int main(){
	
	setlocale(0,"Portuguese");
	
	int numero[10],soma = 0,subtracao = 0,i;
	float media = 0;
		
		for(i = 0;i < 10 ; i++ ){
		printf("Digite um número");
		scanf("%d",&numero[i]);															
		}
		
		for(i = 1;i < 10 ; i+=2 ){
			subtracao = subtracao - numero[i];									
		}	

		for(i = 0;i < 10 ; i+=2 ){
			soma = soma + numero[i];									
		}
		
		printf("Soma %d\n",soma);
		printf("Subtração %d",subtracao);
	
}
	
	
	


