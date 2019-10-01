#include <stdio.h>
#include <stdlib.h>
//Converte Reais em Dólares.!

int main(void){     

	int cont=1, quantConv;
	float real, dolar;	
	system("clear");

	printf("Quantas vezes você quer converter? ");
	scanf("%i", &quantConv);
	while (cont <= quantConv) {
		printf("\nQual o valor em R$? ");
		scanf("%f", &real);
		dolar = (real/4.15);
		printf("O valor convertido é US$ %.2f Dólares.\n", dolar);
        cont++;
	}
	return 0;
}
