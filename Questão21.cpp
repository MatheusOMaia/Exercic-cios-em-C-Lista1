#include <stdio.h>
#include <locale.h>
/*21) Escreva um programa que leia doze números do tipo inteiro ao usuário.
Separe essesnúmeros em pares e ímpares e os armazenem em dois outros vetores separando pares eímpares, 
exibindo os resultados na tela. */

int main(){
	
	setlocale(0,"Portuguese");
	
	int numero[12],i,impar[12],impar2=0,par[12],par2 = 0;

		
		for(i = 0;i < 12 ; i++ ){
		printf("Digite um número");
		scanf("%d",&numero[i]);
		}
		
			
		
		for(i = 0;i < 12 ; i++ ){
				if(numero[i] %2 == 0){
					par[par2] = numero[i];
					par2++;
				}
				else{
					impar[impar2] = numero[i];	
					impar2++;
				}
		}
		
		printf("Pares:");	
		for(i = 0;i < par2 ; i++ ){
			printf("%d ",par[i]);				
		}
		printf("\nImpares:");	
		for(i = 0;i < impar2 ; i++ ){		
			printf("%d ",impar[i]);
		}
}
	
	
	


