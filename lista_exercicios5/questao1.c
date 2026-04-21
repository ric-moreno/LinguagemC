/*1) Escreva um programa que imprima a tabuada de multiplicação de um número digitado pelo usuário. 
O programa deve pedir para o usuário digitar um número de 1 até 9 e imprimir a tabuada desse número.*/

/*IMPRIME A TABUADA DE UM NUMERO ESPECIFICO*/

#include<stdio.h>

int main(){
	
	int num, i, resultado;
	
	printf("Digite um numero de 1 a 9: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 9; i++){
		
		resultado = num * i;
		printf("%d x %d = %d\n", num, i, resultado);
		
	}
	
	return 0;
}



/*IMPRIME A TABUADA DE TODOS OS NUMEROS DE 1 A 9*/

#include<stdio.h>

int main(){
	
	int n, i;
	
	printf("SOMA\n");
	for(n = 1; n <= 10; n++){
		
		for(i = 1; i <= 10; i++){
			printf("%d + %d = %d\n", n, i, n + i);
		}
	printf("\n");
	}
	
	printf("SUBTRACAO\n");
	for(n = 1; n <= 10; n++){
		
		for(i = 1; i <= 10; i++){
			printf("%d - %d = %d\n", n, i, n - i);
		}
	printf("\n");
	}
	
	printf("MULTIPLICACAO\n");
	for(n = 1; n <= 10; n++){
		
		for(i = 1; i <= 10; i++){
			printf("%d x %d = %d\n", n, i, n * i);
		}
	printf("\n");
	}
	
	printf("DIVISAO\n");
	for(n = 1; n <= 10; n++){
		
		for(i = 1; i <= 10; i++){
			printf("%d / %d = %d\n", n, i, n / i);
		}
	printf("\n");
	}
	
}
