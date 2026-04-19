/*1) Escreva um programa que imprima todos os múltiplos de 7, menores que 1000.*/

#include<stdio.h>

int main(){
	
	int a = 7;
	
	while(a < 1000){
		
		printf("%d ", a);
		a = a + 7;
	}
}




/*2) Escreva um programa que calcule e imprima a soma de N números digitados. 
Caso o usuário digite zero, o programa deve parar a leitura de números e imprimir o resultado. 
O zero digitado não deve ser considerado no cálculo, embora essa soma não altere o resultado final.*/

#include<stdio.h>

int main(){
	
	int num, soma = 0;
	
	while(num != 0){
		
		printf("Digite um numero ou 0 para interromper: ");
		scanf("%d", &num);
		
		if (num != 0);
		soma = soma + num;
		
	}
	
	printf("Soma: %d\n", soma);
	return 0;
}




/*3) Escreva um programa que calcule e imprima a média de N números digitados. 
Caso o usuário digite zero, o programa deve parar a leitura de números e imprimir o resultado. 
O zero digitado não deve ser considerado no cálculo.*/

#include<stdio.h>

int main(){
	
	int contador = 0;
	float num, soma = 0, media;
	
	while(num != 0){
		
		printf("Digite um numero ou 0 para interromper: ");
		scanf("%f", &num);
		
		if (num != 0){
		
		soma = soma + num;
		contador++;
				
		}
	}
	
	media = soma / contador;
	printf("Media %.2f\n", media);
	return 0;
}




/*4) Escreva um programa que leia N números inteiros positivos e, 
ao final, informe qual foi o maior número digitado. 
O programa deve parar a leitura dos números quando o usuário digitar zero ou um número negativo.*/

#include<stdio.h>

int main(){
	
	int num, maior = 0;
	
	while(num > 0){
		
		printf("Digite um numero inteiro positivo (0 ou negativo para interromper): ");
		scanf("%d", &num);
		
		if (num > maior)
			
			maior =  num;
	}
	
	printf("O maior numero digitado e: %d", maior);
	return 0;
}




/*5) Escreva um programa que leia N números inteiros positivos e, 
ao final, informe quantos números pares e quantos números ímpares foram digitados. 
O programa deve parar a leitura dos números quando o usuário digitar zero ou um número negativo.*/

#include<stdio.h>

int main(){
	
	int num, par = 0, impar = 0;
	
	do{
		
		printf("Digite um numero inteiro positivo (0 ou negativo para interromper): ");
		scanf("%d", &num);
		
		if (num > 0){
		
			if (num % 2 == 0)
				par++;
			else
				impar++;
		}
		
	} while(num > 0);
	
	printf("Foram digitados %d numero(s) par(es) e %d numero(s) impar(es)", par, impar);
	return 0;
}




/*6) Escreva um programa que leia N números inteiros positivos e, ao final, 
informe qual foi o menor número digitado. 
O programa deve parar a leitura dos números quando o usuário digitar zero ou um número negativo.*/

#include<stdio.h>

int main(){
	
	int num, menor = 0;
	
	do{
		printf("Digite um numero inteiro positivo (0 ou negativo para parar): ");
		scanf("%d", &num);
		
		if(num > 0)
			menor = num;
				
	} while(num > 0);
	
	printf("O menor numero digitado e: %d", menor);
	return 0;
}




/*7) Escreva um programa que leia um número inteiro positivo e 
imprima todos os números ímpares positivos menores que o número digitado.*/

#include<stdio.h>

int main(){
	
	int num, impar = 1;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	while(impar < num){
		
		if(impar % 2 == 1)
			printf("%d\n", impar);
			impar++;
	}
	
	return 0;
}




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




/*10) Escreva um programa que imprima todos os múltiplos de 9 que estão no intervalo entre 100 e 1000.*/

#include<stdio.h>

int main(){
	
	int a = 100;
	
	while(a < 1000){
		
		if(a % 9 == 0){
		
			printf("%d ", a);
		}
		
		a++;
	}
	
	return 0;
}
