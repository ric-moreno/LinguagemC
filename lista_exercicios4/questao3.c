/*3) Escreva um programa que calcule e imprima a média de N números digitados. 
Caso o usuário digite zero, o programa deve parar a leitura de números e imprimir o resultado. 
O zero digitado não deve ser considerado no cálculo.*/

#include<stdio.h>

int main(){
	
	int contador = 0;
	float num, soma = 0, media;
	
	while(num != 0){
		
		printf("Digite um numero ou 0 para interromper: ");
		scanf("%f", &num);
		
		if (num != 0){
		
		soma = soma + num;
		contador++;
				
		}
	}
	
	media = soma / contador;
	printf("Media %.2f\n", media);
	return 0;
}
