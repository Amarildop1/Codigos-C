#include<stdio.h>
#include<stdlib.h>
/**
*Calcula um aumento de salário entre 10% e 20%
*de acordo com alguns critérios.
*/
int main(void){

	float SalarioAtual=0, SalarioNovo=0;
	char nome;

	system("clear");
	printf("\nDigite seu nome: ");	
	scanf("%s", &nome);
	printf("Qual o seu salário? ");
	scanf("%f", &SalarioAtual);
	
	if(SalarioAtual <= 1000) { 
		SalarioNovo = SalarioAtual + (SalarioAtual * 0.2);
		printf("\nSalário Atual: %.2f\n", SalarioAtual);
		printf("Seu novo salário é: %.2f\n\n", SalarioNovo);
	} 
	 else if(SalarioAtual >= 1000,01 && SalarioAtual <= 5000) {
	 	SalarioNovo = SalarioAtual + (SalarioAtual * 0.1);
		printf("\nSalário Atual: %.2f\n", SalarioAtual);
		printf("Seu novo salário é: %.2f\n\n", SalarioNovo);
	 }
	  else { printf("\nVocê não terá aumento!\n\n"); }

	return 0;
}
