#include <stdio.h>
#include <locale.h>
#include <math.h> 

/*1) Fa?a um programa que solicite 2 n?meros e informe: a soma dos n?meros,
 o produto doprimeiro n?mero pelo quadrado do segundo,
 o quadrado do primeiro n?mero, a raiz quadradada soma dos quadrados,
  o seno da diferen?a do primeiro n?mero pelo segundo e O m?dulodo primeiro n?mero.*/

int main(){
	
	setlocale(0,"Portuguese");
	
	float numero[2],operacoes[6];

	
	printf("Digite dois n?meros para realizar opera??es matem?ticas:");
	scanf("%f %f",&numero[0],&numero[1]);

	operacoes[0] = numero[0] + numero[1];
	operacoes[1] = numero[0] * pow( numero[1],2 );
	operacoes[2] = pow( numero[0],2 );
	operacoes[3] = sqrt( pow( numero[0],2 ) + pow( numero [1],2 ) );
	operacoes[4] = sin(numero[0] - numero[1]);
	operacoes[5] = fabs(numero[0]);
	
	
	printf("A soma entre eles ?: %2.f\n",operacoes[0]);
	printf("O produto entre o primeiro n?mero e o quadrado do segundo ? : %.2f\n",operacoes[1]);
	printf("O quadrado do primeiro n?mero ? : %.2f\n",operacoes[2]);
	printf("A raiz quadrada da soma dos quadrados dos dois n?meros ? : %.2f\n",operacoes[3]);
	printf("O seno da diferen?a do primeiro n?mero pelo segundo ? : %f\n",operacoes[4]);
	printf("O m?dulo do primeiro n?mero ? : %.2f\n",operacoes[5]);
	
}
