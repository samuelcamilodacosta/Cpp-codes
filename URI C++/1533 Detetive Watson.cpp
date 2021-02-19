#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec;
	unordered_map <int, int> umap;
	int x, pos, n;
	while(1){
		cin >> n;
		if(n==0) return 0;
		for (int i = 0; i < n; i++){
			cin >> x;
			umap[x] = i;
			vec.push_back(x);
		}
		sort(vec.begin(), vec.end());
		pos = -2+vec.size();
		cout << (1+umap[vec[pos]]) << endl;
		umap.clear();
		vec.clear();
	}
}