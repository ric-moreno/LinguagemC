/*10) Escreva um programa que imprima todos os múltiplos de 9 que estão no intervalo entre 100 e 1000.*/

#include<stdio.h>

int main(){
	
	int a = 100;
	
	while(a < 1000){
		
		if(a % 9 == 0){
		
			printf("%d ", a);
		}
		
		a++;
	}
	
	return 0;
}
