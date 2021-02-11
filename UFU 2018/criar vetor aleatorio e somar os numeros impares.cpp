#include <iostream>
#include <cstdlib>
int main(){
	setlocale(LC_ALL, "");
	int *p;
	int i = 0, s = 0, n;
	scanf("%d", &n);
	p = (int *) malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		p[i] = rand() % 10;
		printf("%d\n", p[i]);
		if(p[i]%2 != 0){
			s = s+p[i];
		}
	}
	printf("A soma dos números impares é: %d", s);
	free(p);
	return 0;
}
