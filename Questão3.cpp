#include <stdio.h>
#include <locale.h>
/*3) Escreva um programa que leia um n?mero na base decimal e em seguida imprima esse mesmo n?mero nas bases octal e hexadecimal. */


int main(){
	
	setlocale(0,"Portuguese");
	
	int numero;
	
	
	printf("Digite um n?mero na base decimal para saber seu representante em base octal e hexadecimal\n");
	scanf("%d",&numero);
	
	printf("Seu n?mero na base octal ?: %o e na base hexadecimal ? %x",numero,numero);
	
}
