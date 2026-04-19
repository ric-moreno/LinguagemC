/*3) Escreva um programa que leia dois números e mostre qual deles é o maior.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("O número 1 é maior que o número 2");
	}
	
	else if (num2 > num1){
		printf("O número 2 é maior que o número 1");
	}
	
	else {
		printf("Os 2 números são iguais");
	}
	
	return 0;
}
