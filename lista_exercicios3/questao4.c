/*4) Escreva um programa que leia três números e mostre-os em ordem crescente.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite o terceiro número: ");
	scanf("%d", &num3);
	
	/*VERIFICA NUM1*/
	if (num1 < num2 && num2 < num3){
		printf("%d%d%d", num1, num2, num3);
	}
	
	else if (num1 < num3 && num3 < num2){
		printf("%d%d%d", num1, num3, num2);
	}
	
	/*VERIFICA NUM2*/
	else if (num2 < num1 && num1 < num3){
		printf("%d%d%d", num2, num1, num3);
	}
	
	else if (num2 < num3 && num3 < num1){
		printf("%d%d%d", num2, num3, num1);
	}
	
	/*VERIFICA NUM3*/
	else if (num3 < num1 && num1 < num2){
		printf("%d%d%d", num3, num1, num2);
	}
	
	else {
		printf("%d%d%d", num3, num2, num1);
	}
	
	return 0;
}
