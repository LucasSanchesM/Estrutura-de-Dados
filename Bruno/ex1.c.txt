#include <stdio.h>

int main()
{
	int n1 = 0;
	float n2=0;

	printf("Digite um numero inteiro");
	scanf("%i", &n1);
	printf("Digite um numero real");
	scanf("%f", &n2);

	printf("%d numero inteiro, %.2f numweo real", n1, n2);

	return 0;
}

