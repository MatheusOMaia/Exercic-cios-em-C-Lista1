#include <stdio.h>
#include <locale.h>
/*5) Escreva um programa que imprime a tabela ASCII (c?digo decimal, c?digo hexa, caractere)para os c?digos de 0 a 127.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int i;
	
	printf("Tabela ASCII:\nD H C\n");
	for(i = 0; i <= 127;i++){
		printf("%d %x %c\n",i,i,i);
	}

}
