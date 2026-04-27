/*6) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas 
(em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	float altura, peso;
	char sexo;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o sexo M/F: ");
	sexo = getchar();
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	switch(sexo){
		case 'M': {
			peso = (72.7 * altura) - 58;
			printf("O peso ideal é de %.2f", peso);
			break;
		}
		
		case 'F': {
			peso = (62.1 * altura) - 44.7;
			printf("O peso ideal é de %.2f", peso);
			break;
		}
		
		default:
			printf("Dados fornecidos inválidos!");
	}
	
	return 0;
	
}
