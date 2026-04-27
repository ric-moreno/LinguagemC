/*14) Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.*/

#include<stdio.h>

int main(){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 != 0)
        printf("Numero divisivel somente por 3\n");

    else if(num % 5 == 0 && num % 3 != 0)
        printf("Numero divisivel somente por 5\n");

    else
        printf("Numero invalido\n");

    return 0;
}
