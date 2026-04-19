/*8) Escreva um programa que leia dois números inteiros positivos (X e Y) diferentes e 
imprima todos os números inteiros (pares e ímpares) que estão no intervalo formado pelos números digitados. 
O programa deve solicitar ao usuário que ele digite os números de forma que X sempre seja menor que Y.*/

#include<stdio.h>

int main(){
	
	int X, Y, i;
	
		do{
			
			printf("Digite o primeiro numero inteiro positivo X: ");
			scanf("%d", &X);
			
			printf("Digite o segundo numero inteiro positivo Y: ");
			scanf("%d", &Y);
			
			if(X >= Y)
				printf("O valor de X deve ser menor que Y\n");
			
		} while(X >= Y);
	
			i = X;
		
		while(i < Y){
			
			printf("%d ", i);
			i++;
		}	
			
	return 0;
	
}
