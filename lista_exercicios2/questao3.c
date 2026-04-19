/*3) Escreva um programa em linguagem C que leia 4 números inteiros, 
calcule a média aritmética entre esses números e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
	setlocale(LC_ALL, "portuguese");

	int num1, num2, num3, num4;
	float media;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite o terceiro número: ");
	scanf("%d", &num3);
	
	printf("Digite o quarto número: ");
	scanf("%d", &num4);
	
	media = (num1 + num2 + num3 + num4) / 4;
	
	printf("A média dos números é: %.2f", media);

	return 0;
}
