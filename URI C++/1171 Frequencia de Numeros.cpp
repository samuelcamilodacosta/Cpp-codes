#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y;
	cin >> x;
	unordered_map<int, int> umap;
	vector<int> vec;
	while(x>0){
		cin >> y;
		umap[y]++;
		if(umap[y]==1) vec.push_back(y);
		x--;
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " aparece " << umap[vec[i]] << " vez(es)" << endl;
	return 0;
}