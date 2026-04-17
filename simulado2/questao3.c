#include <stdio.h>

int main() {
    
    int num1 = 1, num2 = 1, soma, i;
    
    for(i = 1; i <= 30; i++) {
        
        if(i == 1 || i == 2)
            printf("%d ", num1);
        else {
            soma = num1 + num2;
            printf("%d ", soma);
            num1 = num2;
            num2 = soma;
        }
    }
    
    return 0;
}
