#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	scanf("%d", &x);
	for(int i=0; i<x; i++){
		if(i+1 == x){
			printf("Ho!\n");
		}
		else{
			printf("Ho ");
		}
	}
	return 0;
}
