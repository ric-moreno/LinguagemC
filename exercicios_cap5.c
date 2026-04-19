/*1) Escreva um programa que imprima a tabuada de multiplicação de um número digitado pelo usuário. 
O programa deve pedir para o usuário digitar um número de 1 até 9 e imprimir a tabuada desse número.*/

#include<stdio.h>

int main(){
	
	int num, i, resultado;
	
	printf("Digite um numero de 1 a 9: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 9; i++){
		
		resultado = num * i;
		printf("%d x %d = %d\n", num, i, resultado);
		
	}
	
	return 0;
}




/*2) Escreva um programa que imprima a tabuada completa dos números de 1 até 9, 
considerando as quatro operações aritméticas básicas (soma, subtração, multiplicação e divisão).*/

#include<stdio.h>

int main(){
	
	int num, i, soma, subt, mult;
	float div;
	
	printf("Insira um numero de 1 a 9: ");
	scanf("%d", &num);
	
	for(i = 1; i <=9; i++){
		
		soma = num + i;
		subt = num - i;
		mult = num * i;
		div = num / i;
		
		printf("%d + %d = %d\t%d - %d = %d\t%d * %d = %d\t%d / %d = %.1f\n", i, num, soma, i, num, subt, i, num, mult, i, num, div);
		
	}
	
	return 0;
}




/*3) Escreva um programa que verifique se um número inteiro fornecido pelo usuário é primo ou não. */

#include<stdio.h>

int main(){
	
	int num, i, contador = 0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		if(num % i == 0)
			contador += 1;
		
	}
	
	if(contador == 2)
		printf("O numero %d e um numero primo", num);
	else
		printf("O numero %d nao e um numero primo", num);
	return 0;
}




/*4) Escreva um programa que imprima a série de Fibonacci até o trigésimo termo. 
Os dez primeiros termos da série são: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.*/

#include<stdio.h>

int main(){
	
	int num1 = 0, num2 = 1, i, serie = 0;
	
	for(i = 1; i <= 30; i++){
		
		num1 = num2;
		num2 = serie;
		serie = num1 + num2;
		printf("%d ", serie);
	}
	
	return 0;
}




/*5) Escreva um programa que leia 20 números inteiros positivos e, ao final, 
informe quantos números pares e quantos números ímpares foram digitados.*/

#include<stdio.h>

int main(){

	int i, num, par = 0, impar = 0;
	
	for(i = 1; i <= 20; i++){
	
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num % 2 == 0)
			par++;
		else
			impar++;
	}
	
	printf("Foram digitados %d numeros pares e %d numeros impares", par, impar);
	return 0;
}




/*6) Escreva um programa que leia 15 números inteiros positivos e, ao final, 
informe qual foi o menor número digitado.*/

#include<stdio.h>

int main(){
	
	int i, num, menor = 0;
	
	for(i = 1; i <= 15; i++){
		
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &num);
		
		if(i == 1)
			menor = num;
			
		else
			if (num < menor)
				menor = num;
			
	}
	
	printf("O menor numero digitado e %d", menor);
	return 0;
}




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




/*9) Escreva um programa que imprima a soma de todos os números inteiros de 100 até 200.*/

#include<stdio.h>

int main(){
	
	int i, soma;
	
	for(i = 100; i <= 200; i++){
		
		soma = soma + i;
		
	}
	
	printf("Soma: %d ", soma);
	return 0;
}




/*10) Escreva um programa que imprima todos os múltiplos de 9 que estão no intervalo entre 100 e 1000.*/

#include<stdio.h>

int main(){
	
	int i;
	
	for(i = 100; i <= 1000; i++){
		
		if(i % 9 == 0)
		printf("%d ", i);
	}
	
	return 0;
}
