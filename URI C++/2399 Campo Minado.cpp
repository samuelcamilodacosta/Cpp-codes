#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, mina;
	scanf("%d", &n);
	if(n<1 || n>50)
		return 0;
	int v[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	for (int i = 0; i < n; i++){
		mina = 0;
		if(v[i] == 1) mina++;
		if(i>0)
			if(v[i-1]==1) mina++;
		if(i+1!=n)
			if(v[i+1]==1) mina++;
		cout << mina << endl;
	}
	return 0;
}