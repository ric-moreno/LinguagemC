/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include<stdio.h>

int main(){
	
	int i, num, menor, maior;
	
	for(i = 1; i <= 10; i++){
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(i == 1){
		
			maior = num;
			menor = num;
		}
		
		if(num > maior){
		
			maior = num;
		}
		
		if(num < menor){
		
			menor = num;
		}
	}
	
	printf("Menor numero: %d ", menor);
	printf("Maior numero: %d ", maior);
}
