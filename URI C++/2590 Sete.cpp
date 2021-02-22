#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	scanf("%d", &n);
	while(n>0){
		scanf("%d", &x);
		if(x%4 == 0){
			printf("1\n");
		}else if(x%4 == 1){
			printf("7\n");
		}else if(x%4 == 2){
			printf("9\n");
		}else{
			printf("3\n");
		}
		n--;
	}
	return 0;
}