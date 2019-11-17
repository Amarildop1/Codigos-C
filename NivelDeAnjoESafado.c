#include <stdio.h>
#include <stdlib.h>

void wesleySafadao();

int main(void){

	int dia, mes, ano;

	printf("\nInforme o dia que você nasceu: ");
	scanf("%i", &dia);
	printf("Informe o mes (Ex.: 1 ate 12): ");
	scanf("%i", &mes);
	printf("Informe o ano: ");
	scanf("%i", &ano);

	wesleySafadao(dia, mes, ano);

}

void wesleySafadao(int dia, int mes, int ano){

	int safadeza, anjo;

	safadeza = ((mes) + (ano/100) * (50 - dia))/10;
	anjo = (100 - safadeza);

	printf("\nSafadeza: %.2i%% \n", safadeza);
	printf("Anjo: %.2i%% \n\n", anjo);
}
/*
	Implemente a função wesley_safadao que recebe uma data de nascimento (dia, mes e ano)
	e calcula a porcentagem de anjo e a porcentagem de safado de uma pessoa que nasceu na data de entrada.
	Fórmula: safadeza = mes + (ano/100) * (50-dia).
	Anjo = 100 - safadeza.
	A função não retorna nada, apenas escreve a % na tela.
*/