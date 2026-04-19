/*6) Escreva um programa em linguagem C que leia a base e a altura de um triângulo, 
calcule a área desse triângulo e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
	setlocale(LC_ALL, "portuguese");
	
	int base, altura, area;
	
	printf("Digite a base do triangulo: ");
	scanf("%d", &base);
	
	printf("Digite a altura do triangulo: ");
	scanf("%d", &altura);
	
	area = (base * altura) / 2;
	
	printf("A área do triangulo é de %d m2", area);
	
	return 0;
}
