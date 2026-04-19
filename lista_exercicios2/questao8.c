/*8) Escreva um programa em linguagem C que leia o raio de uma circunferência, 
calcule a área dessa circunferência e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
	setlocale(LC_ALL, "portuguese");
	
	float raio, area;
	
	printf("Digite o raio da circunferência: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	
	printf("A área da circunferência é de %.2f m2", area);
	
	return 0;
}
