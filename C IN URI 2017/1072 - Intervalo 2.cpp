#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x, s1=0, s2=0;
	scanf("%d", &n);
	do{
		scanf("%d", &x);
		if(x>=10 && x<=20){
			s1 = s1+1;
		}
		else{
			s2 = s2+1;
		}
		n = n-1;
	}while(n!=0);
	printf("%d in\n", s1);
	printf("%d out\n", s2);
	return 0;
}
