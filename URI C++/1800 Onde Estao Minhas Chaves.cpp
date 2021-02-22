#include <bits/stdc++.h>
using namespace std;

int main(){
	int Q, E, x;
	unordered_map <int, int> umap;
	cin >> Q >> E;
	for (int i = 0; i < E; i++){
		cin >> x;
		umap[x] = 1;
	}
	for (int i = 0; i < Q; i++){
		cin >> x;
		if(umap[x]==1){
			cout << "0" << endl;
		}else{
			umap[x] = 1;
			cout << "1" << endl;
		}
	}
	return 0;
}