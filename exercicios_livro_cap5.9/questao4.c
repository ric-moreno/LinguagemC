/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

#include<stdio.h>

int main(){
	
	int i, contador = 0;
	
	for(i = 3; contador < 5; i++){
		
		if(i % 3 == 0){
		printf("%d ", i);
		contador++;
		}
	}
	return 0;
}
