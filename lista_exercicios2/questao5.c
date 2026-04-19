/*5) Escreva um programa em linguagem C que leia uma temperatura na escala Celsius, 
converta para o seu valor correspondente nas escalas Fahrenheit e Kelvin e imprima esses valores na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
	setlocale(LC_ALL, "portuguese");
	
	float celsius, fahr, kelvin;
	
	printf("Digite uma temperatura em °C: ");
	scanf("%f", &celsius);
	
	fahr = celsius * 1.8 + 32;
	kelvin = celsius + 273;
	
	printf("A temperatura de %.2f°C, corresponde a %.2f°F e %.2fK", celsius, fahr, kelvin);
	
	return 0;
}
