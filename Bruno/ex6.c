#include <stdio.h>

int main()
{
    float num;
    
    printf("Digite um numero inteiro: ");
    scanf("%f", &num);
    int fracionaria = (int)((num-(int)num)*100);
    printf("\nParte Inteira: %d\nParte Fracionaria: %d", (int)num, fracionaria);
    
}
