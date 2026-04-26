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
		else
			printf("Foi digitado zero");
	}
	
	media = soma / contador;
	printf("Media %.2f\n", media);
	return 0;
}


/*====== DO-WHILE ======*/
#include<stdio.h>

int main(){
	
	int num, cont = 0;
	float media, soma = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num != 0){
			soma += num;
			cont++;
		}
				
	} while(num != 0);
	
	if(cont > 0){
		media = soma / cont;
		printf("Media dos numeros digitados: %.2f\n", media);
	}
	else
		printf("O usuario digitou 0. Finalizando...\n");
	return 0;
}
