#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int, int> umap;
	int n, max=-1, key=0, x;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		umap[x]++;
		if(umap[x]>max){
			max = umap[x];
			key = x;
		}else if(umap[x]==max){
			if(x>key){
				max = umap[x];
				key = x;
			}
		}
	}
	cout << key << endl;
	return 0;
}