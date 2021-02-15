#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, r, x, cont=0;
	while(scanf("%d %d", &n, &r)!=EOF){
		int v[n+1];
		for (int i = 1; i <= n; i++)
			v[i] = 0;
		for (int i = 0; i < r; i++){
			scanf("%d", &x);
			v[x] = 1;
		}
		if(n==r){
			cout << "*" << endl;
		}else{
			for (int i=1; i<=n; i++){
				if(v[i]!=1){
					cout << i <<" "; 
				}
			}
			cout << endl;
		}
	}
	return 0;
}