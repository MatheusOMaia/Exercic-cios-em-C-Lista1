#include <stdio.h>
#include <locale.h>
/*7) Implemente um programa que solicita as notas das duas provas
feitas por cada um dosalunos de uma turma (as notas têm de estar no intervalo [0 10])
e imprime para cada um a média das notas. O programa deve parar imediatamente após ter sido digitado 
o valor 50 paraa nota da primeira prova.*/

int main(){
	
	setlocale(0,"Portuguese");
	
	float nota[2],media;
		
		printf("Quando quiser terminar digite 50 na primeira nota\n");
	
		while(nota[0] != 50){
		
			printf("Digite a primeira nota:\n") ;
			scanf("%f",&nota[0]);
			
			if(nota[0] == 50) return(0);
			
			if(nota[0] >= 0 && nota[0] <= 10){															
				printf("Digite a segunda nota:\n") ;
				scanf("%f",&nota[1]);		
				if(nota[1] >= 0 && nota[1] <= 10){				
					media = (nota[0] + nota[1])/2;
					printf("A média desse aluno foi %.2f\n",media);				
				}
				else
				printf("As notas foram digitadas erradas, digite a nota do aluno novamente:\n");
			}
			else
			printf("As notas foram digitadas erradas, digite a nota do aluno novamente:\n");				
		}
	
}


