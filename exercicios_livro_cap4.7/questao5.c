/*5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
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
