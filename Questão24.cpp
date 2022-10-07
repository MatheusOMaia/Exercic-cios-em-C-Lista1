#include <stdio.h>
#include <locale.h>
/*24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a umadada quantia. 
Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.*/

int main(){
	
	setlocale(0,"Portuguese");
	
	int i,reais,cedulas;
	
		printf("Digite uma quantia de Reais para saber qual a quantidade mínima de cédulas que você precisará: ");
		scanf("%d",&reais);	
		
		
		if(reais >= 100){
			cedulas = reais/100; 
			printf("Vc precisará de %d nota(s) de 100\n",cedulas);
			reais = reais - (cedulas *100);
			//printf("Reais: %d\n",reais);
		}
		
		if(reais < 100 && reais >= 50){
			cedulas = reais/50; 
			printf("Vc precisará de %d nota(s) de 50\n",cedulas);
			reais = reais - (cedulas *50);
			//printf("Reais: %d\n",reais);
		}
		
		if(reais < 50 && reais >= 20){
			cedulas = reais/20; 
			printf("Vc precisará de %d nota(s) de 20\n",cedulas);
			reais = reais - (cedulas *20);
			//printf("Reais: %d\n",reais);
		}
		if(reais < 20 && reais >= 10){
			cedulas = reais/10; 
			printf("Vc precisará de %d nota(s) de 10\n",cedulas);
			reais = reais - (cedulas *10);
			//printf("Reais: %d\n",reais);
		}
		if(reais < 10 && reais >= 5){
			cedulas= reais/5; 
			printf("Vc precisará de %d nota(s) de 5\n",cedulas);
			reais = reais - (cedulas *5);
			//printf("Reais: %d\n",reais);
		}
		if(reais < 5 && reais >= 1){
			cedulas = reais; 
			printf("Vc precisará de %d nota(s) de 1\n",cedulas);
			reais = reais - cedulas;
			//printf("Reais: %d\n",reais);
		}
		
		
		
		
	
	
}
	
	
	


