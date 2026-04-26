/*6) Escreva um programa que leia N números inteiros positivos e, ao final, 
informe qual foi o menor número digitado. 
O programa deve parar a leitura dos números quando o usuário digitar zero ou um número negativo.*/

#include<stdio.h>

int main(){
	
	int num, menor;
	
	printf("Digite um numero inteiro positivo, 0 para Sair: ");
	scanf("%d", &num);
	
	if(num <= 0){
        printf("Finalizando o programa\n");
        return 0;
    }
    
	menor = num;
	
	while(num > 0){
			
		if(num < menor)
			menor = num;
			
		printf("Digite um novo numero inteiro positivo, 0 para Sair: ");
		scanf("%d", &num);
	}
	
	printf("Finalizando o programa\n");
	printf("O menor numero digitado foi: %d\n", menor);
	return 0;
}



/*====== DO-WHILE ======*/
#include<stdio.h>

int main(){
	
	int num, menor;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	if(num > 0)
		menor = num;
	else
		return 0;
		
	do{
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &num);
		
		if(num > 0 && num < menor)
			menor = num;
			
	} while(num > 0);
	printf("O menor numero digitado e: %d\n", menor);
	return 0;
}
