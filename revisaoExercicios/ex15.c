#include<stdio.h>

void main(){
    
    printf("****** Calculadora no Console ******\n\nEscolha a opção de operando:");
    printf("\n1) + (soma)\n2) - (subtracao)\n3) * (multiplicacao)\n4) / (divisao)\n");
    int opcao = 0; 
    scanf("%d", &opcao);
    double num1, num2;
    switch(opcao){
        case 1:
            printf("\nOpcao SOMA selecionada\nInforme os dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            printf("\nResultado: %.2f", num1+num2);
            break;
        
        case 2:
            printf("\nOpcao SUBTRACAO selecionada\nInforme os dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            printf("\nResultado: %.2f", num1-num2);
            break;
        
        case 3:
            printf("\nOpcao MULTIPLICACAO selecionada\nInforme os dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            printf("\nResultado: %.2f", num1*num2);
            break;
            
        case 4:
            printf("\nOpcao DIVISAO selecionada\nInforme os dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            printf("\nResultado: %.2f", num1/num2);
            break;
        
        default:
            printf("\nOpcao invalida");
            break;
    }
    
}
