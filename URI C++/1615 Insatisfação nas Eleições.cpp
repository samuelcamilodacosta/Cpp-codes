#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m, x, r;
	cin >> t;
	while(t>0){
		r = 0;
		cin >> n >> m;
		unordered_map<int, int> umap;
		for (int i = 0; i < m; i++){
			cin >> x;
			umap[x]++;
		}
		for (auto it:umap){
			if(it.second>(m/2)){
				cout << it.first << endl;
				r++;
				break;
			}
		}
		if(r==0) cout << "-1" << endl;
		umap.clear();
		t--;
	}
	return 0;
}