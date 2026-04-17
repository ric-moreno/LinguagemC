/*2. Escreva um programa em linguagem C que receba como entrada o valor do salário de um funcionário, calcule e apresente o novo salário, sabendo-se que
este sofreu um aumento de 25%.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
  setlocale(LC_ALL, "portuguese");
	
	int salario;
	
	printf("Digite o valor do salário: ");
	scanf("%d", &salario);
	
	salario = salario * 1.25;
	
	printf("O novo salário após o aumento é de R$: %d", salario);

	return 0;
}
