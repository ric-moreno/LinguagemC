/*9) Escreva um programa que leia dois números inteiros positivos (X e Y) diferentes e 
imprima todos os números inteiros (pares e ímpares) que estão no intervalo formado pelos números digitados. 
O programa deve testar qual dos números digitados é o menor e qual é o maior, antes de imprimir os números do intervalo.*/

#include<stdio.h>

int main(){
	
	int X, Y, inicio, fim;
	
	do{
		
		printf("Digite um numero inteiro positivo X: ");
		scanf("%d", &X);
		
		printf("Digite um numero inteiro positivo Y: ");
		scanf("%d", &Y);
		
		if(X < 0 || Y < 0 || X == Y)
			printf("Digite um numero valido, positivo e diferente para X e Y\n");
		
	} while(X < 0 || Y < 0 || X == Y);
	
	if(X < Y){
	
		inicio = X;
		fim = Y;
	}
	
	else{
	
		inicio = Y;
		fim = X;
	}
	
	while(inicio < fim){
		printf("%d ", inicio);
		inicio++;
	}
	
	return 0;
	
}
