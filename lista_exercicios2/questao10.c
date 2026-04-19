/*10) Escreva um programa em linguagem C que leia um número no formato CDU (centena, dezena e unidade) e imprima esse número invertido (UDC). Exemplo: quando o número lido for 123, 
o programa deve imprimir 321. Antes de imprimir o número invertido, ele deve ser armazenado em outra variável, diferente daquela usada para armazenar o número digitado. Dica: utilize o operador
de resto da divisão (%).*/

#include<stdio.h>
#include<locale.h>

int main(){
  
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
