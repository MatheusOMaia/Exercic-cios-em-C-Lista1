#include <stdio.h>
#include <locale.h>
/*23) Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazeneem um vetor, 
depois o programa dever� apresentar na tela os n�meros na ordem inversa doqual foram digitados.*/

int main(){
	
	setlocale(0,"Portuguese");
	
	int numero[6],i;

		
		for(i = 0;i < 6 ; i++ ){
		printf("Digite um n�mero: ");
		scanf("%d",&numero[i]);															
		}
		printf("A ordem inversa da que voc� digitou foi:\n");
		for(i = 5;i >=0 ; i--){
			printf("%d ",numero[i]);									
		}	

	
	
}
	
	
	


