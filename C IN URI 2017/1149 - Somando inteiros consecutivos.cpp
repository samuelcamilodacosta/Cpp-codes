#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, n, s=0;
	scanf("%d", &a);
	while(n<=0){
		scanf("%d", &n);}
	do{
		s = s+a;
		a=a+1;
		n = n-1;
	}while(n!=0);
	cout << s << endl;
	return 0;
}
