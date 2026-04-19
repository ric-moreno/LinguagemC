/*2) Escreva um programa que efetue o cálculo do reajuste de salário de um funcionário. 
Considere que o funcionário deverá receber um reajuste de 15% caso seu salário seja menor que R$ 1.000,00. 
Se o salário for maior ou igual a R$ 1.000,00 e menor ou igual a R$ 1.500,00, seu reajuste será de 10%; 
caso seja maior que R$ 1.500,00, o reajuste deverá ser de 5%.
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
	
	else if (salario >= 1000){
		salario = salario * 1.10;
	}
	
	else {
		salario = salario * 1.15;
	}
	
	printf("O valor do salário reajustado é de R$ %.2f", salario);
	return 0;
	
}
