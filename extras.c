/*1) Calculadora de operações básicas utilizando comando switch*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");	
	int num1, num2, resultado;
	char op;
	
	printf("Digite a operação desejada + - * /: ");
	op = getchar();
	
	printf("digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("digite o segundo número: ");
	scanf("%d", &num2);
	
	switch(op){
		case '+':{
			resultado = num1 + num2;
			printf("Soma: %d", resultado);
			break;
		}
			
		case '-':{
			resultado = num1 - num2;
			printf("Subtração: %d", resultado);
			break;
		}
		
		case '*':{
			resultado = num1 * num2;
			printf("Multiplicação: %d", resultado);
			break;
		}
		
		case '/':{
			
			if (num1 == 0 || num2 == 0){
				printf("Divisão por zero");
				break;
			}
			
			else{
				resultado = num1 / num2;
				printf("Divisão: %d", resultado);
				break;
			}
		}
		
		default:
			printf("Operação Inválida");
	}
	
	return 0;

}





/*2) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num, quad, raiz;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num >= 0){
		quad = num * num;
		raiz = sqrt(num);
		printf("O quadrado do número digitado é %d\n", quad);
		printf("A raiz quadrada do número digitado é %d", raiz);
	}
	
	else
		printf("O número digitado %d é negativo", num);
	
	return 0;
}





/*3) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas 
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
