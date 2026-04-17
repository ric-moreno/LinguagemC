#include<stdio.h>

int main(){
    int num1, num2;
  
    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
  
    printf("Digite o segundo número:\n");
    scanf("%d", &num2);

    if(num1 > num2)
        printf("O maior número digitado foi %d.", num1);
    else if(num2 > num1)
        printf("O maior número digitado foi %d.", num2);
    else
        printf("Você digitou o mesmo número duas vezes!");

    return 0;
}
