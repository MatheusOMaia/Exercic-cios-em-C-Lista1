#include <stdio.h>
#include <locale.h>
/*23) Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazeneem um vetor, 
depois o programa deverá apresentar na tela os números na ordem inversa doqual foram digitados.*/

int main(){
	
	setlocale(0,"Portuguese");
	
	int numero[6],i;

		
		for(i = 0;i < 6 ; i++ ){
		printf("Digite um número: ");
		scanf("%d",&numero[i]);															
		}
		printf("A ordem inversa da que você digitou foi:\n");
		for(i = 5;i >=0 ; i--){
			printf("%d ",numero[i]);									
		}	

	
	
}
	
	
	


