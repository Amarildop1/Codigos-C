#include <stdio.h>
#include<stdlib.h>
// =============================================================
// Algoritmo para calcular o Indice de Massa Corporal de uma pessoa
// =============================================================
int main(void){

	float massa, altura, IMC;

	system("clear");
	printf("Qual sua Massa (Kg)? ");
	scanf("%f", &massa);
	printf("Qual Altura (m)? ");
	scanf("%f", &altura);
	IMC = massa / (altura*altura);
	printf("IMC: %.2f \n", IMC);
		if(IMC >= 18.5 && IMC < 25){ 
			printf("Parabéns! Você está no seu peso ideal!\n\n"); 
		}else{ 
			printf("Você não está na faixa de peso ideal!\n\n"); 
		}
	return 0;
}
