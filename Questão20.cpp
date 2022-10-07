#include <stdio.h>
#include <string.h>
/*20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética*/


int main(){
	

	
	char nome1[20],outronome[20];
	int ret;
	
		
		printf("Digite um nome: ");
		scanf("%s",&nome1);
		
	
		
		printf("Digite outronome: ");
		scanf("%s",&outronome);
		
		
		
		ret = strcmp(nome1,outronome);
		if(ret < 0){
			printf("%s\n%s",nome1,outronome);
		}
		else 
			printf("%s\n%s",outronome,nome1);
		
			
			
	}
	
	
	


