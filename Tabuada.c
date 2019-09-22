#include <stdio.h>
#include <stdlib.h>
// MOSTRA A TABUADA DE UM NÚMERO ESCOLHIDO PELO USUÁRIO
int main(void){

	int cont=1, num=0, result=0;
	system("clear");

	printf("Quer ver a tabuada de qual numero? ");
	scanf("%i", &num);

	do {
		result = num * cont;
		printf("%i x %i = %i\n", num, cont, result);
		cont++;
	}while(cont <= 10);
	return 0;
}
