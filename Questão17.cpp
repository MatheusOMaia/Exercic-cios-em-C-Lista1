#include <stdio.h>
#include <locale.h>
/*17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. 
Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. 
Dado um número n,calcule seu quadrado usando a soma de ímpares ao invés de produto.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int  impar = 1,num,i,soma = 1;
		
		
		printf("Digite um número para saber seu quadrado perfeito pela soma:\n");
		scanf("%d",&num);
		
		if(num <= 0){
			printf("Número deveria ser maior que 0");
			return 0;
		}
		printf("%d^2 =",num);	
				
		for(i = 1 ; i  <num   ; i++){		
			printf(" %d + ",impar);
			impar = impar + 2;
			soma = soma + impar;
		}
		printf("%d = ",impar);	
		printf("%d",soma);			
	}
