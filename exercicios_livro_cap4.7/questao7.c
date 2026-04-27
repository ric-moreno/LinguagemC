/*7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. 
Faça um programa em que o usuário entre com o valor e o estado de destino do produto e 
o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. 
Se o estado digitado não for válido, mostrará uma mensagem de erro.
Estado		MG		SP		RJ		MS
Imposto		7%		12%		15%		8% */

#include<stdio.h>
#include<locale.h>

int main(){
	
	float valor, preco;
	int UF;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o estado de destino do produto: \n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n");
	scanf("%d", &UF);
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valor);
	
	switch(UF){
	
		case 1:		
			preco = valor * 1.07;
			printf("O preço final do produto em MG é de R$ %.2f ", preco);
			break;
			
		case 2:
			preco = valor * 1.12;
			printf("O preço final do produto em SP é de R$ %.2f ", preco);
			break;
			
		case 3:
			preco = valor * 1.15;
			printf("O preço final do produto em RJ é de R$ %.2f ", preco);
			break;
			
		case 4:
			preco = valor * 1.08;
			printf("O preço final do produto em MS é de R$ %.2f ", preco);
			break;
			
		default:
			printf("Digite um estado válido");
	}
	
	return 0;	
	
}
