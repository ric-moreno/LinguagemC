/*5. Escreva um programa em linguagem C que receba como entradas o ano de nascimento de uma pessoa e o ano atual, calcule e apresente a idade desta
pessoa, e quantos anos essa pessoa terá em 2030.*/

#include<stdio.h>
#include<locale.h>

int main(){
  
    setlocale(LC_ALL, "portuguese");
    
    int ano_nasc, ano_atual = 2026, idade, idade_2030;
    
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano_nasc);
    
    idade = ano_atual - ano_nasc;
    idade_2030 = 2030 - ano_nasc;
    
    printf("A idade atual da pessoa é: %d e em 2030 esta pessoa terá: %d anos", idade, idade_2030);
    
    return 0;
}
