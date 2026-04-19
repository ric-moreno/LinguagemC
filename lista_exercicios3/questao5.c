/*5) Escreva um programa que leia um número inteiro e verifique se este número é par ou ímpar.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num1;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	
	if (num1 % 2 == 0){
		printf("O número digitado é par");
	}	
	
	else {
		printf("O número digitado é impar");
	}
	
	return 0;
}
