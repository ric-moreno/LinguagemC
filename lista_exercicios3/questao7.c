/*7) A média final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho de laboratório, 
a uma avaliação semestral e a um exame final: 
a) se a média do aluno estiver entre 0,0 e 5,0, inclusive, então seu conceito é E; 
b) se estiver entre 5,1 e 6,0, inclusive, seu conceito é D; 
c) se estiver entre 6,1 e 7,0, inclusive, seu conceito é C; 
d) se estiver entre 7,1 e 8,0, inclusive, seu conceito é B; 
e) se estiver entre 8,1 e 10,0, inclusive, seu conceito é A. 
Escreva um programa que leia as três notas de um aluno, calcule e mostre a média e o conceito do aluno.*/

#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	float trabalho, avaliacao, exame, media;
	
	printf("Digite a nota do trabalho de laboratório: ");
	scanf("%f", &trabalho);
	
	printf("Digite a nota da avaliação semestral: ");
	scanf("%f", &avaliacao);
	
	printf("Digite a nota do exame final: ");
	scanf("%f", &exame);
	
	media = (trabalho + avaliacao + exame) / 3;
	
	if (media >= 0.0 && media <= 5.0){
		printf("A média final do estudante é: %.2f\nConceito E", media);
	}
	
	else if (media >= 5.1 && media <= 6.0){
		printf("A média final do estudante é: %.2f\nConceito D", media);
	}
	
	else if (media >= 6.1 && media <= 7.0){
		printf("A média final do estudante é: %.2f\nConceito C", media);
	}
	
	else if (media >= 7.1 && media <= 8.0){
		printf("A média final do estudante é: %.2f\nConceito B", media);
	}
	
	else {
		printf("A média final do estudante é: %.2f\nConceito A", media);
	}
	
	return 0;
}
