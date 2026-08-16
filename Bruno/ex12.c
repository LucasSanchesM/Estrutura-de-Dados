#include<stdio.h>

void main(){
    double salario = 0;
    double prestacao = 0;
    
    printf("Insira o salario: ");
    scanf("%lf", &salario);
    
    printf("Insira o valor da prestacao: ");
    scanf("%lf", &prestacao);
    
    salario*0.2 >= prestacao ? printf("Prestacao APROVADA") : printf("Prestacao RECUSADA");
    
}
