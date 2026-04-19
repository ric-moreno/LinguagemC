/*10) Escreva um programa que imprima todos os múltiplos de 9 que estão no intervalo entre 100 e 1000.*/

#include<stdio.h>

int main(){
	
	int i;
	
	for(i = 100; i <= 1000; i++){
		
		if(i % 9 == 0)
		printf("%d ", i);
	}
	
	return 0;
}
