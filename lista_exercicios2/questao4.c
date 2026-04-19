/*4) Escreva um programa em linguagem C que leia um número e imprima o seu antecessor e o seu sucessor.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num, antecessor, sucessor;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	antecessor = num - 1;
	sucessor = num + 1;
	
	printf("O número digitado é: %d, o seu antecessor é: %d e o seu sucessor é: %d", num, antecessor, sucessor);
	
	return 0;
}
