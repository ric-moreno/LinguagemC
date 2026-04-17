/*4. Escreva um programa em linguagem C que receba como entrada um horário formado por horas e minutos, calcule e apresente o tempo correspondente em
minutos.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
    setlocale(LC_ALL, "portuguese");
    
    int horas, minutos, total;
    
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);
    
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);
    
    total = horas * 60 + minutos;
    
    printf("A quantidade total de minutos é de: %d minutos", total);
    
    return 0;
}
