/*8) Escreva um programa que leia dois números inteiros positivos (X e Y) diferentes e 
imprima todos os números inteiros (pares e ímpares) que estão no intervalo formado pelos números digitados. 
O programa deve solicitar ao usuário que ele digite os números de forma que X sempre seja menor que Y.*/

#include<stdio.h>

int main(){
	
	int X, Y, i;
	
	printf("Digite o valor de X: ");
	scanf("%d", &X);
	
	printf("Digite o valor de Y: ");
	scanf("%d", &Y);
	
	if(X <= 0 || Y <= 0){
		printf("Digite numeros inteiros positivos\n");
		return 0;
	}
	
	if(X == Y || Y < X){
		printf("X e Y nao podem ser iguais e Y nao pode ser menor que X\n");
		return 0;
	}
	
	while(X <= Y){
		printf("%d ", X);
		X++;
	}
	return 0;
}



/*====== DO-WHILE ======*/
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
