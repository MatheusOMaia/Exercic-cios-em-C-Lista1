#include <stdio.h>
#include <locale.h>
/*6) Faça um programa que lê o preço de um produto e inflaciona esse preço
em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
OBS: não use o comando "if"ou o operador de condição "?". */


int main(){
	
	setlocale(0,"Portuguese");
	
	float valor,i,imposto;
	
	printf("Diga o valor desse produto:");
	scanf("%f",&valor);
	
	
	for(i = valor;i<100;i = 100){
		imposto = valor + valor*0.10;
		printf("imposto 10 É %f",imposto);
	}
	
	for(i = valor;i>=100;i = 99){
		imposto = valor + valor*0.20;
		printf("Imposto20 É %f",imposto);
	}
	
		

}
