#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_map <int, int> umap;
	int x, y, z, cont;
	while(true){
		cont = 0;
		cin >> x >> y;
		if(x==0 && y==0) return 0;
		for(int i = 0; i < y; i++){
			cin >> z;
			umap[z]++;
		}
		for(int i = 1; i <= x; i++){
			if(umap[i]>1){
				cont++;
			}
		}
		cout << cont << endl;
		umap.clear();
	}
}