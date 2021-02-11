#include <stdio.h>
int main(){
	int a[5]={0,1,2,3,4};
	int *p;
	p = &a[0];
	printf("%d\n",*(p+2));
	for(int i=0; i<5; i++){
	*(p+i) = *(p+i)+1;
	}
	printf("Valor armazenado: %d\n",*(a+2));
	printf("Valor do endereço: %d\n", (a+2));
	return 0;
}
