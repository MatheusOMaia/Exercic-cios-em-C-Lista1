#include <stdio.h>
#include <locale.h>
/*25) Fa?a um programa que l? um conjunto de 10 valores inteiros e verifica se algum dosvalores ? igual a m?dia dos mesmos*/

int main(){
	
	setlocale(0,"Portuguese");
	
	int numero[10],i;
	float media = 0;
		
		for(i = 0;i < 10 ; i++ ){
		printf("Digite um n?mero");
		scanf("%d",&numero[i]);	
					
		media = media + numero[i];									
		}
		
		media = media/10;

		for(i = 1;i < 10 ; i++ ){
			if(numero[i] == media)	
			printf("Opa esse n?mero %d na posi??o %d ? igual a m?dia %.2f\n",numero[i],i,media);									
		}
		
	
}
	
	
	


