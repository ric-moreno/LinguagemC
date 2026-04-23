/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include<stdio.h>

int main(){
	
	int i, contador = 0, soma = 0;
	
	for(i = 1; contador < 50; i++){
		if(i % 2 == 0){
			printf("%d ", i);
			soma += i;
			contador++;
		}
	}
	printf("\nsoma: %d", soma, contador);
	
	return 0;
}
