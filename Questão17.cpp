#include <stdio.h>
#include <locale.h>
/*17) O quadrado de um n?mero natural n ? dado pela soma dos n primeiros n?meros ?mpares consecutivos. 
Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. 
Dado um n?mero n,calcule seu quadrado usando a soma de ?mpares ao inv?s de produto.*/


int main(){
	
	setlocale(0,"Portuguese");
	
	int  impar = 1,num,i,soma = 1;
		
		
		printf("Digite um n?mero para saber seu quadrado perfeito pela soma:\n");
		scanf("%d",&num);
		
		if(num <= 0){
			printf("N?mero deveria ser maior que 0");
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
