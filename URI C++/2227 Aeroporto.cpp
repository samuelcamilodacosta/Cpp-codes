#include <bits/stdc++.h>
using namespace std;

int main(){
	int A, V, cont = 0, x, y, max;
	unordered_map <int, int> umap;
	while(true){
		cont++;
		cin >> A >> V;
		if(A == 0 && V == 0) return 0;
		cout << "Teste " << cont << endl;
		max = 0;
		for (int i = 0; i < V; i++){
			cin >> x >> y;
			umap[x]++; umap[y]++;
			if(umap[x]>max) max = umap[x];
			if(umap[y]>max) max = umap[y];
		}
		for (int i = 1; i <= A; i++){
			if(umap[i]==max) cout << i << " ";
		}
		cout << endl << endl;
		umap.clear();
	}
	return 0;
}