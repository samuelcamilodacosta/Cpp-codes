#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DC 0 
#define DD 2 
#define DU 7 

double f(double x) { 
	double y = 0.0;
	double PI = 4.0*atan(1.0);
	switch(DU) {
		case 0: y = x*x-5*x+6; break;
		case 1: y = 2.0*PI*x; break;
		case 2: y = PI*x*x; break;
		case 3: y = 6*x/PI; break;
		case 4: y = x*x*2.0*PI; break;
		case 5: y = -x*x+5*x-6; break;
		case 6: y = 3.5*x-2.0; break;
		case 7: y = PI*x/2.0; break;
		case 8: y = -PI*x+0.1*x; break;
		case 9: y = 2.0*x-3.0*PI; break;
		default: y = 0.0;
	}
	return y; 
}
int main() {
	srand(DC*100+DD*10+DU);
	double x, y; int i;
	FILE * arq;
	remove("dados.dat");
	arq = fopen("dados.dat","ab");
	for(i = 0; i < 100; i++) {
		x = (double) rand()/RAND_MAX;
		y = f(x);
		printf("[%d] %lf\n", i, y);
		fwrite(&y,sizeof(double),1,arq);
	}
	printf("Matricula: %d%d%d\n",DC,DD,DU);
	fclose(arq);
	return EXIT_SUCCESS;
}
