#include <stdio.h>
#include <stdlib.h>
int main(){
	char *p;
	int i = 0, s = 0, n;
	scanf("%d", &n);
	p = (char *) malloc(n*sizeof(char));
	fflush(stdin);
	gets(p);
	for(i=0; i<n; i++){
		if(p[i] == p[0]){
		s = s+1;	
		}	
	}
	printf("%d", s);
	free(p);
	return 0;
}
