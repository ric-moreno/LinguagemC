/*2) Escreva um programa que calcule e imprima a soma de N números digitados. 
Caso o usuário digite zero, o programa deve parar a leitura de números e imprimir o resultado. 
O zero digitado não deve ser considerado no cálculo, embora essa soma não altere o resultado final.*/

#include<stdio.h>

int main(){
	
	int num, soma = 0;
	
	while(num != 0){
		
		printf("Digite um numero ou 0 para interromper: ");
		scanf("%d", &num);
		
		if (num != 0);
		soma = soma + num;
		
	}
	
	printf("Soma: %d\n", soma);
	return 0;
}


/*====== DO-WHILE ======*/
#include<stdio.h>

int main(){
	int soma = 0, num;
	
	do{
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num != 0)
			soma += num;
		else
			printf("Finalizando programa...\n");
	} while(num !=0);
	
	printf("Soma dos numeros digitados: %d\n", soma);
	return 0;
}
