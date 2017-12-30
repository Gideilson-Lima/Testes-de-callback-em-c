int MENOR_PARA_O_MAIOR(int a, int b){
	return (a>b); //--simplificação da função
}

int MAIOR_PARA_O_MENOR(int a, int b){
	return (a<b); //--simplificação da função
}
void ordenar(int *a, int size, int (*ptr_fun)(int, int)){
	int aux;
	
	for(int i=0;i<size-1;i++){
		for(int j=i;j<size;j++){
			if(ptr_fun(a[i],a[j])==1){
				aux = a[j];
				a[j] = a[i];
				a[i] = aux;
			}
		}
	}
}

