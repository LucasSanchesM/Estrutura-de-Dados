#include <stdio.h>

int main()
{
float	km=0;
float m;

	printf("Informe a velocidade em km/h: ");
	scanf("%f", &km);

	m = km * 1000;

	printf("em metros por segundo %.2f", m);
	return 0;
}
