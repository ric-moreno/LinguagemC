/*1) Escreva um programa que leia dois valores inteiros e efetue a soma entre eles. 
Caso o valor resultante da soma seja maior ou igual a 10, some 5 a este resultado e apresente-o na tela. 
Caso o valor resultante da soma seja menor que 10, subtraia 7 do resultado e imprima-o na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	if (soma >= 10) {
		soma = soma + 5;
	}
	
	else {
		soma = soma - 7;
	}
	
	printf("O resultado da soma é: %d", soma);
	return 0;
	
}





/*2) Escreva um programa que efetue o cálculo do reajuste de salário de um funcionário. 
Considere que o funcionário deverá receber um reajuste de 15% caso seu salário seja menor que R$ 1.000,00. 
Se o salário for maior ou igual a R$ 1.000,00 e menor ou igual a R$ 1.500,00, seu reajuste será de 10%; caso seja maior que R$ 1.500,00, o reajuste deverá ser de 5%.
Note: O problema estabelece três condições para calcular o reajuste do salário:
Salário < 1000, reajuste de 15%;
Salário = 1000, mas = 1500, reajuste de 10%;
Salário > 1500, reajuste de 5%.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	float salario;
	
	printf("digite o salário: ");
	scanf("%f", &salario);
	
	if (salario > 1500){
		salario = salario * 1.05;
	}
	
	else if (salario >= 1000 && salario <= 1500){
		salario = salario * 1.10;
	}
	
	else {
		salario = salario * 1.15;
	}
	
	printf("O valor do salário reajustado é de R$ %.2f", salario);
	return 0;
	
}





/*3) Escreva um programa que leia dois números e mostre qual deles é o maior.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("O número 1 é maior que o número 2");
	}
	
	else if (num2 > num1){
		printf("O número 2 é maior que o número 1");
	}
	
	else {
		printf("Os 2 números são iguais");
	}
	
	return 0;
}





/*4) Escreva um programa que leia três números e mostre-os em ordem crescente.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite o terceiro número: ");
	scanf("%d", &num3);
	
	/*VERIFICAÇÃO NUM1*/
	if (num1 < num2 && num2 < num3){
		printf("%d%d%d", num1, num2, num3);
	}
	
	else if (num1 < num3 && num3 < num2){
		printf("%d%d%d", num1, num3, num2);
	}
	
	/*VERIFICA NUM2*/
	else if (num2 < num1 && num1 < num3){
		printf("%d%d%d", num2, num1, num3);
	}
	
	else if (num2 < num3 && num3 < num1){
		printf("%d%d%d", num2, num3, num1);
	}
	
	/*VERIFICA NUM3*/
	else if (num3 < num1 && num1 < num2){
		printf("%d%d%d", num3, num1, num2);
	}
	
	else {
		printf("%d%d%d", num3, num2, num1);
	}
	
	return 0;
}





/*5) Escreva um programa que leia um número inteiro e verifique se este número é par ou ímpar.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int num1;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	
	if (num1 % 2 == 0){
		printf("O número digitado é par");
	}	
	
	else {
		printf("O número digitado é impar");
	}
	
	return 0;
}






/*6) Escreva um programa que leia a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir, o programa deve verificar e mostrar qual a classificação dessa pessoa.

							PESO
ALTURA		  < 60	    >= 60 <= 90	   > 90
< 1.2			A			D			G
>= 1.2 <= 1.7	B			E			H
> 1.7			C			F			I	*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	float peso, altura;
	
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	if (altura > 1.7){
		
		if (peso > 90) {
			printf("De acordo com o seu peso/altura a sua classificação é I");
		}
		
		else if (peso >= 60 && peso <= 90) {
			printf("De acordo com o seu peso/altura a sua classificação é F");
		}
		
		else {
			printf("De acordo com o seu peso/altura a sua classificação é C");
		}
	}
	
	else if (altura >= 1.2 && altura <= 1.7){
		
		if (peso > 90) {
			printf("De acordo com o seu peso/altura a sua classificação é H");
		}
		
		else if (peso >= 60 && peso <= 90) {
			printf("De acordo com o seu peso/altura a sua classificação é E");
		}
		
		else {
			printf("De acordo com o seu peso/altura a sua classificação é B");
		}
	}
	
	else {
		
		if (peso > 90) {
			printf("De acordo com o seu peso/altura a sua classificação é G");
		}
		
		else if (peso >= 60 && peso <= 90) {
			printf("De acordo com o seu peso/altura a sua classificação é D");
		}
		
		else {
			printf("De acordo com o seu peso/altura a sua classificação é A");
		}
	}
	
	return 0;
}





/*7) A média final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um exame final: 
a) se a média do aluno estiver entre 0,0 e 5,0, inclusive, então seu conceito é E; 
b) se estiver entre 5,1 e 6,0, inclusive, seu conceito é D; 
c) se estiver entre 6,1 e 7,0, inclusive, seu conceito é C; 
d) se estiver entre 7,1 e 8,0, inclusive, seu conceito é B; 
e) se estiver entre 8,1 e 10,0, inclusive, seu conceito é A. 
Escreva um programa que leia as três notas de um aluno, calcule e mostre a média e o conceito do 
aluno.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	float trabalho, avaliacao, exame, media;
	
	printf("Digite a nota do trabalho de laboratório: ");
	scanf("%f", &trabalho);
	
	printf("Digite a nota da avaliação semestral: ");
	scanf("%f", &avaliacao);
	
	printf("Digite a nota do exame final: ");
	scanf("%f", &exame);
	
	media = (trabalho + avaliacao + exame) / 3;
	
	if (media >= 0.0 && media <= 5.0){
		printf("A média final do estudante é: %.2f\nConceito E", media);
	}
	
	else if (media >= 5.1 && media <= 6.0){
		printf("A média final do estudante é: %.2f\nConceito D", media);
	}
	
	else if (media >= 6.1 && media <= 7.0){
		printf("A média final do estudante é: %.2f\nConceito C", media);
	}
	
	else if (media >= 7.1 && media <= 8.0){
		printf("A média final do estudante é: %.2f\nConceito B", media);
	}
	
	else {
		printf("A média final do estudante é: %.2f\nConceito A", media);
	}
	
	return 0;
}
