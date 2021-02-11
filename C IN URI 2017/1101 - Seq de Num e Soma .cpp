#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, y, s, aux;
	do{
		x=0;y=0;s=0;aux=0;
		scanf("%d%d", &x,&y);
		if(x<=0 || y<=0){ 
		break;}
		if(x>y){ aux=y; y = x; x = aux;}
		for(int i=x; i<=y; i++){
			printf("%d ", i);
			s = s+i;
		}
		printf("Sum=%d\n", s);
	}while(true);
	
	return 0;
}
