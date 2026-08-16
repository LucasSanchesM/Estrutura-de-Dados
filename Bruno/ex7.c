#include <stdio.h>

int main()
{
	float num;
	char c;


	printf("Digite um numero inteiro entre 0 e 127");
	scanf("%f", &num);

	if( num < 0 || num >127) {
		printf("ERROR: digite um numero valido");
	} else {
	  
	printf("\nem caracter %c", (char)num);

		printf("\nDigite uma letra: ");
		scanf(" %c",&c);
		printf("\nem caracter %d", (int)c);
	}
	return 0;
}

