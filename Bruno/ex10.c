#include<stdio.h>

void main(){
    int num1, num2, num3;

    printf("Informe tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("\nNumeros ordenados: ");

    //casos que o num1 é o maior
    if(num1 >= num2 && num1 >= num3 && num2>=num3){
        printf("%d, %d, %d", num3, num2, num1);
    }
    else if(num1 >= num2 && num1 >= num3 && num3>=num2){
        printf("%d, %d, %d", num2, num3, num1);
    }

    //casos que o num 2 é maior
    else if(num2 >= num1 && num2 >= num3 && num1>=num3){
        printf("%d, %d, %d", num3, num1, num2 );
    }
    else if(num2 >= num1 && num2 >= num3 && num3>=num1){
        printf("%d, %d, %d", num1, num3, num2 );
    }

    //casos que o num 3 é o maior
    else if(num3 >= num1 && num3 >= num2 && num1>=num2){
        printf("%d, %d, %d", num2, num1, num3);
    }
    //casos que o num 3 é o maior
    else if(num3 >= num1 && num3 >= num2 && num2>=num1){
        printf("%d, %d, %d", num1, num2, num3);
    }

}
