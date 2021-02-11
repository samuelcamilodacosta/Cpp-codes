#include <iostream>
#include <cstdlib>
int main(){
	setlocale(LC_ALL, "");
	int *p, *par, *impar;
	int i, j, n, aux=0, pares=0, impares=0;
	scanf("%d", &n);
	p = (int *) malloc(n*sizeof(int));
	for(i=0; i<n; i++){ //criando aleatorios
		p[i] =  rand() % 10;
		if(p[i]%2==0){ //par
		pares = pares+1;
		}
		else{ 	//impar
		impares = impares+1; 
		}
		}
		printf("%d ---", pares);
		printf("\n%d\n", impares);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
		if(p[i]<p[j]){ //ordenando
			aux = p[i];
			p[i] = p[j];
			p[j] = aux;
		}
		}
	}
	
	par = (int *) malloc(pares*sizeof(int));
	impar = (int *) malloc(impares*sizeof(int));
	j=0;
	for(i=0; i<n; i++){
				if(p[i]%2==0){
				par[j] = p[i];
				j++;	
			}	
	}
	j=0;
	for(i=0; i<n; i++){
		if(p[i]%2!=0){
			impar[j] = p[i];	
			j++;
		}
	}
	printf("Vetor par: ");
	for(i=0; i<pares; i++){
	printf("%d ", par[i]);
	}
	printf("\nVetor impar: ");
	for(i=0; i<impares; i++){
		printf("%d ", impar[i]);
	}
	
	printf("\nElementos do vetor criado: ");
	for(i=0; i<n; i++){
		printf("%d ", p[i]);
	}
	free(par);
	free(impar);
	free(p);
	return 0;
}
