#include <stdio.h>
#include <locale.h>
#include <math.h> 

/*1) Faça um programa que solicite 2 números e informe: a soma dos números,
 o produto doprimeiro número pelo quadrado do segundo,
 o quadrado do primeiro número, a raiz quadradada soma dos quadrados,
  o seno da diferença do primeiro número pelo segundo e O módulodo primeiro número.*/

int main(){
	
	setlocale(0,"Portuguese");
	
	float numero[2],operacoes[6];

	
	printf("Digite dois números para realizar operações matemáticas:");
	scanf("%f %f",&numero[0],&numero[1]);

	operacoes[0] = numero[0] + numero[1];
	operacoes[1] = numero[0] * pow( numero[1],2 );
	operacoes[2] = pow( numero[0],2 );
	operacoes[3] = sqrt( pow( numero[0],2 ) + pow( numero [1],2 ) );
	operacoes[4] = sin(numero[0] - numero[1]);
	operacoes[5] = fabs(numero[0]);
	
	
	printf("A soma entre eles é: %2.f\n",operacoes[0]);
	printf("O produto entre o primeiro número e o quadrado do segundo é : %.2f\n",operacoes[1]);
	printf("O quadrado do primeiro número é : %.2f\n",operacoes[2]);
	printf("A raiz quadrada da soma dos quadrados dos dois números é : %.2f\n",operacoes[3]);
	printf("O seno da diferença do primeiro número pelo segundo é : %f\n",operacoes[4]);
	printf("O módulo do primeiro número é : %.2f\n",operacoes[5]);
	
}
