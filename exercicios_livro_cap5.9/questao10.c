/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

#include<stdio.h>

int main(){
	
	int num, i, soma = 0, media;
	
	do{
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num > 0){
		
		soma += num;
		i++;
	}
		else
			printf("Numero invalido: ");
			
	} while(i < 10);
	
	media = soma / 10;
	printf("Media: %d", media);
	return 0;
}
