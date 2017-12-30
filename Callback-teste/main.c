#include <stdio.h>
#include <stdlib.h>
#include "lib_poo.h"

void mostar_vetor(int *a, int size){
	for(int i=0;i<size;i++)
		printf("%d\n",a[i]);
}

int main(int argc, char *argv[]){
	int array[5];
	
	array[0]= 4;
	array[1]= 1;
	array[2]= 2;
	array[3]= 3;
	array[4]= 5;
	
	ordenar(array,5,MENOR_PARA_O_MAIOR);
	mostar_vetor(array,5);
	
	printf("\n---------\n");
	
	ordenar(array,5,MAIOR_PARA_O_MENOR);
	mostar_vetor(array,5);
	
	return 0;
}
