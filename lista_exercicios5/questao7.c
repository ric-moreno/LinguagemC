/*7) Escreva um programa que leia dois números inteiros positivos diferentes e 
imprima todos os números pares compreendidos no intervalo formado por esses números, em ordem crescente. 
Antes de imprimir os pares, o programa deve verificar qual dos números digitados é o maior e qual é o menor. 
Utilize o operador de resto da divisão (%).*/

#include<stdio.h>

int main(){
	
	int X, Y, i, maior, menor;
	
	printf("Digite o primeiro numero X: ");
	scanf("%d", &X);
	
	printf("Digite o segundo numero Y: ");
	scanf("%d", &Y);
	
	if(X < Y){
	
		menor = X;
		maior = Y;
	}
	
	else{
	
		menor = Y;
		maior = X;
	}
	
	for(i = menor; i <= maior; i++){
		
		if(i % 2 == 0)
			printf("%d ", i);
	}
	
	return 0;
}
