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





/*7) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. 
Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int dia;
	
	printf("Digite o dia da semana no formato (1-7): ");
	scanf("%d", &dia);
	
	switch(dia){
	
		case 1: 
			printf("Domingo\n"); 
			break;
		case 2: 
			printf("Segunda-feira\n"); 
			break;
		case 3: 
			printf("Terça-feira\n"); 
			break;
		case 4: 
			printf("Quarta-feira\n"); 
			break;
		case 5: 
			printf("Quinta-feira\n"); 
			break;
		case 6: 
			printf("Sexta-feira\n"); 
			break;
		case 7: 
			printf("Sábado\n"); 
			break;
		default:
			printf("Inválido\n");
	}
	
	return 0;
}



/*EXERCICIOS DO LIVRO*/

/*1) Faça um programa que leia um número inteiro positivo N e 
imprima todos os números naturais de 0 até N em ordem crescente.*/

#include<stdio.h>

int main(){
	
	int i, num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	for(i = 0; i <= num; i++){
		printf("%d\n", i);
	}
	return 0;
}



/*2) Faça um programa que leia um número inteiro positivo N e 
imprima todos os números naturais de 0 até N em ordem decrescente.*/

#include<stdio.h>

int main(){
	
	int i, num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	for(i = num; i >= 0; i--){
		printf("%d\n", i);
	}
	return 0;
}


/*3) Faça um programa que leia um número inteiro N e depois 
imprima os N primeiros números naturais ímpares.*/

#include<stdio.h>

int main(){
	
	int i, num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		
		if(i % 2 != 0)
		printf("%d\n", i);
	}
	
	return 0;
}



/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

#include<stdio.h>

int main(){
	
	int i, contador = 0;
	
	for(i = 3; contador < 5; i++){
		
		if(i % 3 == 0){
		printf("%d ", i);
		contador++;
		}
	}
	return 0;
}




/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include<stdio.h>

int main(){
	
	int i, contador = 0, soma = 0;
	
	for(i = 1; contador < 50; i++){
		if(i % 2 == 0){
			printf("%d ", i);
			soma += i;
			contador++;
		}
	}
	printf("\nsoma: %d", soma, contador);
	
	return 0;
}





/*6) Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. 
Mostre uma mensagem “FIM!” após a contagem.*/

#include<stdio.h>

int main(){
	
	int i;
	
	for(i = 10; i >= 0; i--){
	
		printf("%d\n", i);
	}
	
	printf("FIM");
	return 0;
	
}




/*7) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.*/

#include<stdio.h>

int main(){
	
	int i = 1, soma = 0, num;
	
	do{
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		soma += num;
		i++;
		
	} while(i <= 10);
	
	printf("Soma: %d ", soma);
	return 0;
}



/*8) Faça um programa que leia 10 inteiros e imprima sua média.*/

#include<stdio.h>

int main(){
	
	int num, soma, i, media;
	
	for(i = 1; i <= 10; i++){
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		soma += num;

	}
	
	media = soma / 10;
	printf("Media: %d", media);
	return 0;
}




/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include<stdio.h>

int main(){
	
	int i, num, menor, maior;
	
	for(i = 1; i <= 10; i++){
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(i == 1){
		
			maior = num;
			menor = num;
		}
		
		if(num > maior){
		
			maior = num;
		}
		
		if(num < menor){
		
			menor = num;
		}
	}

	
	printf("Menor numero: %d ", menor);
	printf("Maior numero: %d ", maior);
}





/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

#include<stdio.h>

int main(){
	
	int num, i, soma = 0, media;
	
	do{
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num > 0){
		
		soma += num;
		i++;
	}
		else
			printf("Numero invalido: ");
			
	} while(i < 10);
	
	media = soma / 10;
	printf("Media: %d", media);
	return 0;
}
