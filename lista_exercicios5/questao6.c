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
