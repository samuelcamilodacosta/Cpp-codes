#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, min, max, cont = 0;
	cin >> n >> min >> max;
	if(n<2 || n>2000 || min<-2000 || min >2000 || max<-2000 || max>2000){
		return 0;
	}
	int v[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((v[i]+v[j])>=min && (v[i]+v[j]<=max)) {
				if(i==j){
					continue;
				}
				cont++;
			}
		}
	}
	cout << cont/2 << endl;
	return 0;
}