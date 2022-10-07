#include <stdio.h>
#include <locale.h>
/*15) Faça um programa que mostre todos os números pares existentes entre 1 e 50.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int  i;		
		
		printf("Pares existentes entre 1 e 50:\n");
				
		for(i = 2; i <= 50 ; i = i +2){		
			printf("%d ",i);													
		}					
	}
