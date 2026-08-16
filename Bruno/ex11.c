#include<stdio.h>

void main(){
    int num1, num2;

    printf("Insira dois numeros inteiros");
    scanf("%d %d", &num1, &num2);

    int maior = 0;
    int menor = 0;
    if (num1 >= num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }
    printf("O maior eh o %d, a diferença absoluta eh igual a %d", maior, maior-menor);
}
