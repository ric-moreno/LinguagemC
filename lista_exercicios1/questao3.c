/*3. Escreva um programa em linguagem C que receba como entrada o salário bruto de um funcionário, calcule e apresente o salário líquido, sabendo-se que
esse funcionário tem gratificação de 5% sobre o salário bruto, e paga imposto de 7% sobre o salário bruto.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
  setlocale(LC_ALL, "portuguese");
	
	float salario, gratificacao = 0.05, ir = 0.07;
	
	printf("Digite o valor do salário: ");
	scanf("%f", &salario);
	
	salario = salario * (1 + gratificacao);
	salario = salario * (1 - ir);
	
	printf("O salário líquido do funcionário é de R$: %.2f", salario);
	
	return 0;
}
