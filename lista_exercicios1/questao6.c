/*6. Considerando que cada degrau de uma escada tem X centímetros de altura, escreva um programa em linguagem C que receba como entradas a altura dos
degraus e a altura que o usuário deseja alcançar subindo a escada. O algoritmo deve calcular e apresentar quantos degraus o usuário deverá subir
para atingir o seu objetivo. O programa não deve considerar a altura do usuário.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
    setlocale(LC_ALL, "portuguese");
    
    int degrau, altura, qtde;
    
    printf("Digite a altura do degrau em cm: ");
    scanf("%d", &degrau);
    
    printf("Digite a altura a ser alcançado em cm: ");
    scanf("%d", &altura);
    
    qtde = altura / degrau;
    
    printf("O usuário deverá subir %d degrau(s) para atingir o seu objetivo", qtde);
    
    return 0;
}
