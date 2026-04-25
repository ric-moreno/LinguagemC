/*1) Escreva um programa que imprima todos os múltiplos de 7, menores que 1000.*/

#include<stdio.h>

int main(){
	
	int a = 7;
	
	while(a < 1000){
		
		printf("%d ", a);
		a = a + 7;
	}
}


/*====== DO-WHILE ======*/
#include<stdio.h>

int main(){
	
	int num = 7;
	
	do{
		
		if(num % 7 == 0)
			printf("%d ", num);
			num+= 7;
			
	} while(num < 1000);
	return 0;
}
