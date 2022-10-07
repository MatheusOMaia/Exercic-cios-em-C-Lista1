#include <stdio.h>
#include <locale.h>
/*25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dosvalores é igual a média dos mesmos*/

int main(){
	
	setlocale(0,"Portuguese");
	
	int numero[10],i;
	float media = 0;
		
		for(i = 0;i < 10 ; i++ ){
		printf("Digite um número");
		scanf("%d",&numero[i]);	
					
		media = media + numero[i];									
		}
		
		media = media/10;

		for(i = 1;i < 10 ; i++ ){
			if(numero[i] == media)	
			printf("Opa esse número %d na posição %d é igual a média %.2f\n",numero[i],i,media);									
		}
		
	
}
	
	
	


