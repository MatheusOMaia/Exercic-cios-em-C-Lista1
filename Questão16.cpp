#include <stdio.h>
#include <locale.h>
/*16) Dados um número natural n, exiba seu fatorial n!.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	float  num,i;		
		
		printf("Digite um número para saber seu fatorial:\n");
		scanf("%f",&num);
		
		if(num <= 0){
			printf("Número deveria ser maior que 0");
			return 0;
		}

		
		
		
				
		for(i = num - 1; i > 1  ; i--){		
			num = num * i;													
		}	
		printf("fatorial é: %.0f",num);				
	}
