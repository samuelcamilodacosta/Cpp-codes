#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, x, max=0, pos;
	unordered_map <int, int> umap;
	vector<int> vec;
	while(true){
		scanf("%d", &n);
		scanf("%d", &m);
		if(n==0 && m==0) return 0;
		max = 0; pos = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> x;
				umap[x]++;
				if(umap[x]>max) max = umap[x], pos = x;
			}
		}
		umap.erase(pos);
		max = 0;
		unordered_map<int, int>::iterator it;
		for(it=umap.begin(); it!=umap.end(); it++){
			if(it->second > max){
				max = it->second;
			}
		}
		for(it=umap.begin(); it!=umap.end(); it++){
			if(it->second == max){
				vec.push_back(it->first);
			}
		}
		sort(vec.begin(), vec.end());
		for(int i = 0; i < vec.size(); i++){
			cout << vec[i] << " ";
		}
		cout << endl;
		vec.clear();
		umap.clear();
	}
	return 0;
}