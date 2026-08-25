#include<stdio.h>

void main(){
    int num = 0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if(num>0){
        num % 2 == 0 ? printf("Seu numero eh positivo e par") : printf("Seu numero eh positivo e impar");
    }
    else if(num<0){
        num % 2 == 0 ? printf("Seu numero eh negativo e par") : printf("Seu numero eh negativo e impar");
    }
    else{
        printf("Seu numero eh neutro (0) e par");
    }

}
