#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x;
	scanf("%d", &n);
	do{
		scanf("%d", &x);
		if(x!=0){
		if(x%2==0){ printf("EVEN ");}
		else{ printf("ODD ");}
		if(x>0){ printf("POSITIVE\n");}
		else{ printf("NEGATIVE\n");}}
		else{ printf("NULL\n");}
		n=n-1;
	}while(n!=0);
	return 0;
}
