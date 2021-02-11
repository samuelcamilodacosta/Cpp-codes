#include <iostream>
#include <stdlib.h>
using namespace std;
void converter_cm(float *r, float *c, float *a){
	*r = (*r)*100;
	*c = (*c)*100;
	*a = (*a)*10000;
}
int main(){
	setlocale(LC_ALL,"");
	float raio, circunferencia, area;
	float *r, *c, *a;
	printf("Informe a medida do raio(m): ");
	scanf("%f", &raio);
	r = &raio;
	c = &circunferencia;
	a = &area;
	area = 3.1416*(raio*raio);
	circunferencia = 2*3.1416*raio;
	converter_cm(r, c, a);
	printf("O raio em cm: %.2f\n", *r);
	printf("A circunferência em cm: %.2f\n", *c);
	printf("A área em cm²: %.2f\n", *a);
	return 0;
}
