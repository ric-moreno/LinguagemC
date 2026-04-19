/*7) Escreva um programa em linguagem C que leia o valor de uma velocidade em quilômetros por hora, 
calcule o valor correspondente em metros por segundo e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
	setlocale(LC_ALL, "portuguese");
	
	float km, ms;
	
	printf("Digite a velocidade em km: ");
	scanf("%f", &km);
	
	ms = km / 3.6;
	
	printf("A velocidade de %.2f km/h, corresponde a %.2f m/s", km, ms);
	
	return 0;
}
