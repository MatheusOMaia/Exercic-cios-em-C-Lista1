#include <stdio.h>
#include <locale.h>

/*8) Fa?a o programa que apresenta a seguinte sa?da,
perguntando ao usu?rio o n?merom?ximo (no exemplo, 9).
Este n?mero deve ser sempre ?mpar.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int numeromax,par,numeroe = 1,i = numeroe,numerocentral;
		
		
	
		printf("Digite o n?mero m?ximo(?mpar)");
		scanf("%d",&numeromax);
		
		if(numeromax % 2 == 0)
			numeromax = par;
		
		while(numeromax == par){
			
			printf("Esse n?mero foi par digite novamente:");
			printf("Digite o n?mero m?ximo(?mpar)");
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
