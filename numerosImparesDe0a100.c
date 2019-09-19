#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Todos os numeros impares do intervalo fechado de 1 a 100!\n\n");
    int cont;
    for (cont=1 || cont%2!=0; cont<=100; cont++)
		if (cont%2!=0)
    	printf("%d\t", cont);

    return 0;
}
