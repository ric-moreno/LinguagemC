/*6) Escreva um programa que leia a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir, o programa deve verificar e mostrar qual a classificação dessa pessoa.

							        PESO
ALTURA			< 60	 >= 60 <= 90	  > 90
< 1.2			  A			  D			    G
>= 1.2 <= 1.7	  B			  E			    H
> 1.7			  C			  F		        I	*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	float peso, altura;
	
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	if (altura > 1.7){
		
		if (peso > 90) {
			printf("De acordo com o seu peso/altura a sua classificação é I");
		}
		
		else if (peso >= 60 && peso <= 90) {
			printf("De acordo com o seu peso/altura a sua classificação é F");
		}
		
		else {
			printf("De acordo com o seu peso/altura a sua classificação é C");
		}
	}
	
	else if (altura >= 1.2 && altura <= 1.7){
		
		if (peso > 90) {
			printf("De acordo com o seu peso/altura a sua classificação é H");
		}
		
		else if (peso >= 60 && peso <= 90) {
			printf("De acordo com o seu peso/altura a sua classificação é E");
		}
		
		else {
			printf("De acordo com o seu peso/altura a sua classificação é B");
		}
	}
	
	else {
		
		if (peso > 90) {
			printf("De acordo com o seu peso/altura a sua classificação é G");
		}
		
		else if (peso >= 60 && peso <= 90) {
			printf("De acordo com o seu peso/altura a sua classificação é D");
		}
		
		else {
			printf("De acordo com o seu peso/altura a sua classificação é A");
		}
	}
	
	return 0;
}
