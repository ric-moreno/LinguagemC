/*10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes 
médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:
1 geometrica, 2 ponderada, 3 armonica, 4 aritmetica*/

#include<stdio.h>
#include<math.h>

int main(){
	
	int op, x, y, z; 
	float media;
	
	printf("Selecione a media a ser calculada:\n1 geometrica, 2 ponderada, 3 armonica, 4 aritmetica: ");
	scanf("%d", &op);
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	printf("Digite o terceiro numero: ");
	scanf("%d", &z);
	
	switch(op){
		case 1:
			media = pow(x * y * z, 1.0/3.0);
			break;
		case 2:
			media = (x + 2 * y + 3 * z) / 6.00;
			break;
		case 3:
			media = 3.0 / (1.0 / x + 1.0 / y + 1.0 / z);
			break;
		case 4:
			media = (x + y + z) / 3.00;
			break;
		default:
			printf("Opcao invalida\n");
			return 0;
	}
	printf("Media: %.2f", media);
	return 0;
}
