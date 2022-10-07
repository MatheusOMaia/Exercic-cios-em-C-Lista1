#include <stdio.h>
#include <locale.h>

/*8) Faça o programa que apresenta a seguinte saída,
perguntando ao usuário o númeromáximo (no exemplo, 9).
Este número deve ser sempre ímpar.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int numeromax,par,numeroe = 1,i = numeroe,numerocentral;
		
		
	
		printf("Digite o número máximo(ímpar)");
		scanf("%d",&numeromax);
		
		if(numeromax % 2 == 0)
			numeromax = par;
		
		while(numeromax == par){
			
			printf("Esse número foi par digite novamente:");
			printf("Digite o número máximo(ímpar)");
			scanf("%d",&numeromax);
		}
		
		numerocentral = (numeromax + 1)/2;
	
	
		
		for(numeromax;numeromax>=numerocentral;numeromax=numeromax -1){
			for(numeroe = i;numeroe<=numeromax;numeroe++){
				printf(" %d",numeroe);
				printf(" ");
			}
			i++;
			printf(" \n");
		}
			
			
	}
