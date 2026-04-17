#include<stdio.h>

int main(){
    
    int cont;
    float media, num, soma;
    
    printf("Digite quantos números positivos desejar. Para terminar, digite zero: \n");
    
    do{
        if(cont == 0)
            printf("Digite o primeiro número: \n");
        else    
        	printf("Digite o próximo número. Para terminar, digite zero: \n");
        
        scanf("%f", &num);
        
        if(num!=0){
        	soma += num;
        	cont++;
        }
        
    } while(num != 0);
    
    if(cont == 0)
        printf("Não há média para calcular. Você não digitou nenhum número válido.\n");
    else{    
        media = soma / cont;
        printf("Média dos números digitados: %.2f\n", media);
    }
    
    return 0;
}
