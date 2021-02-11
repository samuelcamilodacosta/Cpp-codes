#include <stdio.h>
#include <stdlib.h>
#define DC 0 
#define DD 2 
#define DU 7 

double media(double a, double b, double c) {
	return (a+b+c)/3;
}

int main() {
	FILE * arq;
	int idA, idB, idC;
	double nA, nB, nC;
	arq = fopen("dados.dat","rb");
	if(arq == NULL) {
		fprintf(stderr,"Arquivo inexistente!\n");
		return EXIT_FAILURE;
	}
	switch(DU) {
		case 0: idA = 13; idB = 14; idC = 64; break;
		case 1: idA = 21; idB = 42; idC = 84; break;
		case 2: idA = 23; idB = 37; idC = 46; break;
		case 3: idA = 16; idB = 55; idC = 82; break;
		case 4: idA = 9; idB = 33; idC = 76; break;
		case 5: idA = 0; idB = 39; idC = 99; break;
		case 6: idA = 10; idB = 86; idC = 92; break;
		case 7: idA = 17; idB = 61; idC = 92; break;
		case 8: idA = 11; idB = 24; idC = 77; break;
		case 9: idA = 5; idB = 53; idC = 65; break;
		default: idA = idB = idC = 0;
	}
	
	fseek(arq, idA*sizeof(double),SEEK_SET);
	fread(&nA, sizeof(double),1,arq);
	fseek(arq, idB*sizeof(double),SEEK_SET);
	fread(&nB, sizeof(double),1,arq);
	fseek(arq, idC*sizeof(double),SEEK_SET);
	fread(&nC, sizeof(double),1,arq);	
	
	fclose(arq);
	printf("Matricula: %d%d%d\n",DC,DD,DU);
	printf("Media [%lf %lf %lf] = %lf\n",nA,nB,nC,media(nA,nB,nC));
	return EXIT_SUCCESS;
}
