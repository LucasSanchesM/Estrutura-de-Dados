#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1;
	
	printf("Informe a temperatura em celsius: ");
	scanf("%f", &n1);
	
	printf("\nTemperatura em Fahrenheit: %.2f", (n1*1.8)+32);
	printf("\nTemperatura em Kelvin: %.2f", n1+273.15);
	
	
	return 0;
}
