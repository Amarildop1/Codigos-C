#include <stdio.h>
#include <stdlib.h>
/**
* ALGORITMO PARA VERIFICAR SE um ALUNO ESTÁ APROVADO, 
* REPROVADO OU EM RECUPERAÇÃO.
*/
int main(void){

	float N1=0, N2=0, N3=0, media=0;

	system("clear");
	printf("----> SITUAÇÃO ESCOLAR <----\n\n");
	printf("Modelo das notas: 5.0 | 7.0 | 9.0\n\n");
	printf("Primeira Nota: ");
	scanf("%f",&N1);
	printf("Segunda Nota: ");
	scanf("%f",&N2);
	printf("Terceira Nota: ");
	scanf("%f",&N3);
	media = (N1+N2+N3) / 3;
	printf("---------------------------\n");
	printf("Sua média foi %.2f\n", media);
		if (media >= 7) { printf("Você está APROVADO!\n"); }
		else if (media >= 5 && media <7) { printf("Você está em RECUPERAÇÃO\n");}
		else { printf("Você foi REPROVADO\n"); }
	printf("---------------------------\n\n");

	return 0;
}
