#include <stdio.h>
#include <stdlib.h>
#include "lib_poo.h"

void mostar_vetor(int *a, int size){
	for(int i=0;i<size;i++)
		printf("%d\n",a[i]);
}

int main(int argc, char *argv[]){
	int array[3];
	
	array[0]= 3;
	array[1]= 2;
	array[2]= 1;
	
	ordenar(array,3,MENOR_PARA_O_MAIOR);
	mostar_vetor(array,3);
	
	printf("\n---------\n");
	
	ordenar(array,3,MAIOR_PARA_O_MENOR);
	mostar_vetor(array,3);
	
	return 0;
}
