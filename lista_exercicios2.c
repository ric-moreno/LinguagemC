/*1) Escreva um programa em linguagem C que imprima a seguinte mensagem na tela: 
“Eu vou aprender a programar em Linguagem C na disciplina Algoritmos e Programação I”.*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");
	
	printf("Eu vou aprender a programar em Linguagem C na disciplina Algoritmos e Programação I");
	
	return 0;
}





/*2) Altere o programa anterior para que a mensagem seja dividida e apresentada em três linhas diferentes.*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");
	
	printf("Eu vou aprender\na programar em Linguagem C\nna disciplina Algoritmos e Programação I\n");
	
	return 0;
}






/*3) Escreva um programa em linguagem C que leia 4 números inteiros, 
calcule a média aritmética entre esses números e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");

	int num1, num2, num3, num4;
	float media;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite o terceiro número: ");
	scanf("%d", &num3);
	
	printf("Digite o quarto número: ");
	scanf("%d", &num4);
	
	media = (num1 + num2 + num3 + num4) / 4;
	
	printf("A média dos números é: %.2f", media);

	return 0;
}






/*4) Escreva um programa em linguagem C que leia um número e imprima o seu antecessor e o seu sucessor.*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");
	
	int num, antecessor, sucessor;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	antecessor = num - 1;
	sucessor = num + 1;
	
	printf("O número digitado é: %d, o seu antecessor é: %d e o seu sucessor é: %d", num, antecessor, sucessor);
	
	return 0;
}






/*5) Escreva um programa em linguagem C que leia uma temperatura na escala Celsius, 
converta para o seu valor correspondente nas escalas Fahrenheit e Kelvin e imprima esses valores na tela.*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");
	
	float celsius, fahr, kelvin;
	
	printf("Digite uma temperatura em °C: ");
	scanf("%f", &celsius);
	
	fahr = celsius * 1.8 + 32;
	kelvin = celsius + 273;
	
	printf("A temperatura de %.2f°C, corresponde a %.2f°F e %.2fK", celsius, fahr, kelvin);
	
	return 0;
}




  
/*6) Escreva um programa em linguagem C que leia a base e a altura de um triângulo, 
calcule a área desse triângulo e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main()

{
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





  
/*7) Escreva um programa em linguagem C que leia o valor de uma velocidade em quilômetros por hora, 
calcule o valor correspondente em metros por segundo e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");
	
	float km, ms;
	
	printf("Digite a velocidade em km: ");
	scanf("%f", &km);
	
	ms = km / 3.6;
	
	printf("A velocidade de %.2f km/h, corresponde a %.2f m/s", km, ms);
	
	return 0;
}





  
/*8) Escreva um programa em linguagem C que leia o raio de uma circunferência, 
calcule a área dessa circunferência e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");
	
	float raio, area;
	
	printf("Digite o raio da circunferência: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	
	printf("A área da circunferência é de %.2f m2", area);
	
	return 0;
}





  
/*9) Escreva um programa em linguagem C que leia um número real, calcule o triplo deste número e imprima o resultado na tela.*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");
	
	float num, triplo;
	
	printf("Digite um número real: ");
	scanf("%f", &num);
	
	triplo = num * 3;
	
	printf("O triplo do número %.2f é %.2f", num, triplo);
	
	return 0;
}





  
/*10) Escreva um programa em linguagem C que leia um número no formato CDU (centena, dezena e unidade) e imprima esse número invertido (UDC). Exemplo: quando o número lido for 123, 
o programa deve imprimir 321. Antes de imprimir o número invertido, ele deve ser armazenado em outra variável, diferente daquela usada para armazenar o número digitado. Dica: utilize o operador
de resto da divisão (%).*/

#include<stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "portuguese");
	
	int num, centena, dezena, unidade;
	
	printf("Digite um número no formato CDU (centena, dezena e unidade): ");
	scanf("%d", &num);
	
	centena = (num/1) % 10;
	dezena = (num/10) % 10;
	unidade = (num/100) % 10;
	
	printf("O inverso do número digitado é %d%d%d", centena, dezena, unidade);
	
	return 0;
	
}
