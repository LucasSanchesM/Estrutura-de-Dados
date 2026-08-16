#include<stdio.h>

void main(){
    float n1, n2, n3;
    
    printf("Informe as tres notas em sequencia: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    float total = (n1) + (n2) + (n3*2);
    
    float mediaP = total / 4;
    
    mediaP >= 6 ? printf("APROVADO") : printf("REPROVADO");
    
}
