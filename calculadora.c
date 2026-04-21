#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int opcao;
	float base, exp, num, a, b, c, delta, x1, x2;

	do{
		system("cls");
		printf("------ MENU PRINCIPAL ------\n");
		printf("SELECIONE O CALCULO DESEJADO\n");
		printf("1 : RAIZ QUADRADA\n");
		printf("2 : POTENCIA\n");
		printf("3 : EQUACAO 1o GRAU\n");
		printf("4 : EQUACAO 2o GRAU\n");
		printf("0 : FIM\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Digite um numero: ");
				scanf("%f", &num);
				if(num >= 0)
					printf("Raiz quadrada do numero %.2f = %.2f\n", num, sqrt(num));
				else
					printf("Nao e possivel calcular a raiz de um numero negativo\n");
				system("pause");
				break;
				
			case 2:
				printf("Digite a base: ");
				scanf("%f", &base);
				printf("Digite o expoente: ");
				scanf("%f", &exp);
				printf("A potencia do numero %.2f = %.2f\n", base, pow(base, exp));
				system("pause");
				break;
				
			case 3:
				printf("Digite o valor de a: ");
				scanf("%f", &a);
				printf("Digite o valor de b: ");
				scanf("%f", &b);
				
					if(a != 0)
						printf("O resultado da equacao de 1o grau = %.2f\n", -b / a);
					else
						printf("Equacao invalida, a nao pode ser zero\n");
					system("pause");
					break;
					
			case 4:
				printf("Digite o valor de a: ");
				scanf("%f", &a);
				printf("Digite o valor de b: ");
				scanf("%f", &b);
				printf("Digite o valor de c: ");
				scanf("%f", &c);
				if(a != 0){
					
					delta = b * b - 4 * a * c;
					
						if(delta < 0)
							printf("Nao existem raizes reais\n");
						else{
							x1 = (-b + sqrt(delta)) / (2 * a);
							x2 = (-b - sqrt(delta)) / (2 * a);
							printf("Raizes de x1 = %.2f e x2 = %.2f\n", x1, x2);
						}
				}
				else
					printf("Equacao invalida, a nao pode ser zero\n");	
				system("pause");
				break;
			
			case 0:
				printf("Finalizando o programa...\n");
				break;
				
			default:
				printf("Opcao invalida. Tente novamente\n");
				system("pause");		
		}
		
	} while(opcao != 0);
	return 0;
}
