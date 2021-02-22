#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, cont = 0;
	cin >> n;
	unordered_map <int, int> umap;
	for (int i = 0; i < n; i++){
		cin >> x;
		umap[x]++;
		if(umap[x] == 1) cont++;
	}
	cout << cont << endl;
	return 0;
}