#include <stdio.h>
int main(){
	int w;
	scanf("%d", &w);
	if(w>2 && w<101){
	if(w%2==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	}
	else{
	printf("NO");
	}
	return 0;
}
