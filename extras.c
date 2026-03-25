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





/*4) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. 
Faça um programa em que o usuário entre com o valor e o estado de destino do produto e 
o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. 
Se o estado digitado não for válido, mostrará uma mensagem de erro.

Estado		MG		SP		RJ		MS
Imposto		7%		12%		15%		8% */

#include<stdio.h>
#include<locale.h>

int main(){
	
	float valor, preco;
	int UF;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o estado de destino do produto: \n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n");
	scanf("%d", &UF);
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valor);
	
	switch(UF){
	
		case 1:		
			preco = valor * 1.07;
			printf("O preço final do produto em MG é de R$ %.2f ", preco);
			break;
			
		case 2:
			preco = valor * 1.12;
			printf("O preço final do produto em SP é de R$ %.2f ", preco);
			break;
			
		case 3:
			preco = valor * 1.15;
			printf("O preço final do produto em RJ é de R$ %.2f ", preco);
			break;
			
		case 4:
			preco = valor * 1.08;
			printf("O preço final do produto em MS é de R$ %.2f ", preco);
			break;
			
		default:
			printf("Digite um estado válido");
	}
	
	return 0;	
	
}





/*5) Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

Categoria			Idade
Infantil A			5-7
Infantil B			8-10
Juvenil A			11-13
Juvenil B			14-17
Senior				>18	*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int idade;
		
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18)
		printf("A idade corresponde a categoria Senior");
	else if (idade >= 14)
		printf("A idade corresponde a categoria Juvenil B");
	else if (idade >= 11)
		printf("A idade corresponde a categoria Juvenil A");
	else if (idade >= 8)
		printf("A idade corresponde a categoria Infantil B");
	else if (idade >= 5)
		printf("A idade corresponde a categoria Infantil A");
	else
		printf("Categoria inválida");
	
	return 0;
	
}





/*6) Faça um programa que informe o mês de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = Abril.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int mes;
	
	printf("Digite o mês (1-12): ");
	scanf("%d",&mes);
	
	switch(mes){
		case 1: printf("Janeiro");
			break;
		case 2: printf("Fevereiro");
			break;
		case 3: printf("Março");
			break;
		case 4: printf("Abril");
			break;
		case 5: printf("Maio");
			break;
		case 6: printf("Junho");
			break;
		case 7: printf("Julho");
			break;
		case 8: printf("Agosto");
			break;
		case 9: printf("Setembro");
			break;
		case 10: printf("Outubro");
			break;
		case 11: printf("Novembro");
			break;
		case 12: printf("Dezembro");
			break;
		default:
			printf("Inválido");
	}
	
	return 0;
}
