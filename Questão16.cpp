#include <stdio.h>
#include <locale.h>
/*16) Dados um n?mero natural n, exiba seu fatorial n!.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	float  num,i;		
		
		printf("Digite um n?mero para saber seu fatorial:\n");
		scanf("%f",&num);
		
		if(num <= 0){
			printf("N?mero deveria ser maior que 0");
			return 0;
		}

		
		
		
				
		for(i = num - 1; i > 1  ; i--){		
			num = num * i;													
		}	
		printf("fatorial ?: %.0f",num);				
	}
