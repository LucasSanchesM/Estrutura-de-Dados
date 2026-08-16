#include<stdio.h>

void main(){
    int ano = 0;
    
    printf("Informe o ano: ");
    scanf("%d", &ano);
    
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0 ){
        printf("O ano %d eh bissexto", ano);
    }
    else{
        printf("O ano nao eh bissexto");
    }
}
