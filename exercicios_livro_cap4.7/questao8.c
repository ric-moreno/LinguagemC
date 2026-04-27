/*8) Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Categoria			Idade
Infantil A			5-7
Infantil B			8-10
Juvenil A			11-13
Juvenil B			14-17
Senior				>18	*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int idade;
		
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18)
		printf("A idade corresponde a categoria Senior");
	else if (idade >= 14)
		printf("A idade corresponde a categoria Juvenil B");
	else if (idade >= 11)
		printf("A idade corresponde a categoria Juvenil A");
	else if (idade >= 8)
		printf("A idade corresponde a categoria Infantil B");
	else if (idade >= 5)
		printf("A idade corresponde a categoria Infantil A");
	else
		printf("Categoria inválida");
	
	return 0;
	
}
