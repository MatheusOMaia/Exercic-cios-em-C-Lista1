#include <stdio.h>
#include <locale.h>

/*2) Crie um programa que receba o valor da temperatura em Fahrenheit e imprime ocorrespondente em Celsius e em Kelvin: (0,1)*/

int main(){
	
	setlocale(0,"Portuguese");
	
	float celsius,fahreheint,kelvin;

	printf("Digite uma temperatura em fahrenheint para converte-la para escala celsius e kelvin\n");
	scanf("%f",&fahreheint);
	
	celsius = (fahreheint - 32)/1.8;
	kelvin = celsius + 273.15;
	
	printf("Celsius %.2f°\n",celsius);
	printf("Kelvin %f\n",kelvin);
	

}
