/*9) Escreva um programa em linguagem C que leia um número real, calcule o triplo deste número e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
	setlocale(LC_ALL, "portuguese");
	
	float num, triplo;
	
	printf("Digite um número real: ");
	scanf("%f", &num);
	
	triplo = num * 3;
	
	printf("O triplo do número %.2f é %.2f", num, triplo);
	
	return 0;
}
