/*4) Escreva um programa que leia N números inteiros positivos e, 
ao final, informe qual foi o maior número digitado. 
O programa deve parar a leitura dos números quando o usuário digitar zero ou um número negativo.*/

#include<stdio.h>

int main(){
	
	int num, maior = 0;
	
	while(num > 0){
		
		printf("Digite um numero inteiro positivo (0 ou negativo para interromper): ");
		scanf("%d", &num);
		
		if (num > maior)
			
			maior =  num;
	}
	
	printf("O maior numero digitado e: %d", maior);
	return 0;
}


/*====== DO-WHILE ======*/
#include<stdio.h>

int main(){

    int num, maior = 0;

    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);

        if(num > maior)
            maior = num;

    } while(num > 0);
    printf("O maior numero digitado e: %d\n", maior);
    return 0;
}
