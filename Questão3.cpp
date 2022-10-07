#include <stdio.h>
#include <locale.h>
/*3) Escreva um programa que leia um número na base decimal e em seguida imprima esse mesmo número nas bases octal e hexadecimal. */


int main(){
	
	setlocale(0,"Portuguese");
	
	int numero;
	
	
	printf("Digite um número na base decimal para saber seu representante em base octal e hexadecimal\n");
	scanf("%d",&numero);
	
	printf("Seu número na base octal é: %o e na base hexadecimal é %x",numero,numero);
	
}
