#include <stdio.h>
#include <locale.h>
/*22) Desenvolva um programa que leia dez n?meros do tipo inteiro ao usu?rio armazene essesdez n?meros em um vetor. 
Para os valores dos elementos inseridos nas posi??es pares dessevetor, calcule o somat?rio deles, 
para os demais calcule a subtra??o desses valores. Emseguida, o programa dever? apresentar na tela os resultados.*/

int main(){
	
	setlocale(0,"Portuguese");
	
	int numero[10],soma = 0,subtracao = 0,i;
	float media = 0;
		
		for(i = 0;i < 10 ; i++ ){
		printf("Digite um n?mero");
		scanf("%d",&numero[i]);															
		}
		
		for(i = 1;i < 10 ; i+=2 ){
			subtracao = subtracao - numero[i];									
		}	

		for(i = 0;i < 10 ; i+=2 ){
			soma = soma + numero[i];									
		}
		
		printf("Soma %d\n",soma);
		printf("Subtra??o %d",subtracao);
	
}
	
	
	


