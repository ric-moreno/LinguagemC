/*1) Escreva um programa em linguagem C que imprima a seguinte mensagem na tela: 
“Eu vou aprender a programar em Linguagem C na disciplina Algoritmos e Programação I”.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Eu vou aprender a programar em Linguagem C na disciplina Algoritmos e Programação I");
	
	return 0;
}
