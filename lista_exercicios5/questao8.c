/*8) Escreva um programa que leia dois números inteiros positivos (X e Y) diferentes e 
imprima todos os números inteiros (pares e ímpares) que estão no intervalo formado pelos números digitados, 
em ordem decrescente, incluindo os próprios números digitados. 
programa deve testar qual dos números digitados é o menor e qual é o maior, antes de imprimir os números do intervalo.*/

#include<stdio.h>

int main(){
	
	int X, Y, i, maior, menor;
	
	do{
		
		printf("Digite o primeiro numero: ");
		scanf("%d", &X);
		
		printf("Digite o segundo numero: ");
		scanf("%d", &Y);
	
		if(X == Y)
			printf("Os numeros digitados sao iguais, digite numeros diferentes para X e Y\n");
		
	} while(X == Y);
	
	if(X < Y){
		menor = X;
		maior = Y;
	}
	
	else{
	
		menor = Y;
		maior = X;
	}
	
	for(i = maior; i >= menor; i--){
	
		printf("%d ", i);
	}
	
	return 0;
}
