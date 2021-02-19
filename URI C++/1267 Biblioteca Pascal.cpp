#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int, int> umap;
	int n, d, x, resp;
	while(true){
		resp = 0;
		cin >> n >> d;
		if(n==0 && d==0) return 0;
		for (int i = 0; i < d; i++){
			for (int j = 0; j < n; j++){
				cin >> x;
				if(x==1){
					umap[j]++;
				}
				if(umap[j]==d){
					resp = 1;
				}
			}
		}
		if(resp==1){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
		umap.clear();
	}
}