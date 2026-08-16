#include <stdio.h>

int main()
{
	int raio;
	

	printf("Digite o raio: ");
	scanf("%d", &raio);

	float area = 3.14 * (raio*raio);
	float per= (2*3.14) * raio;

	printf("%.2f", area);
	printf("\n%.2f", per);



	return 0;
}
