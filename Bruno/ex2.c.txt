#include <stdio.h>

int main()
{
	int n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    printf("\nA soma eh: %d", n1+n2);
    printf("\nA subtraçao eh: %d", n1-n2);
    
    if(n2 > 0){
        printf("\nA divisao eh: %d", (int)n1/n2);
        printf("\nO resto eh: %d", n1%n2);
    }else{
        printf("\nDivisor invalido, nao pode ser zero");
    }
	return 0;
}
