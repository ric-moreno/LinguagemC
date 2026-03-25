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
