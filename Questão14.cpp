#include <stdio.h>
#include <locale.h>
/*14) A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc é a temperatura em Celsius e Tf em Fahrenheit. 
Faça um programa C que calcule e que imprima uma tabela de graus Fahrenheit e graus Celsius, 
cujos graus variem de 40 a 75, de1 em 1.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	float tc,tf = 40;
	int  i;					
		for(i = 0; i <= 35 ; i++){
		
			tc = (tf-32) * (5/9.00);
			printf("Fahrenheint: %.2f °F Celsius: %.2f °C\n",tf,tc);					
			tf++;									
		}					
	}
