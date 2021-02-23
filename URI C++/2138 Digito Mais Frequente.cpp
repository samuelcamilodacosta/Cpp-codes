#include <bits/stdc++.h>
using namespace std;

int main(){
	string num; 
	char value;
	unordered_map<char, int> umap;
	while(cin >> num){
		int max = 0, tam = num.length();
		for (int i = 0; i < tam; i++){
			umap[num[i]]++;
		}
		for (auto it:umap){
			if(it.second>max){
				max = it.second;
				value = it.first;
			}else if(it.second==max){
				if(int(it.first)>int(value)){
					max = it.second;
					value = it.first;
				}
				else
					continue;
			}else
				continue;
		}
		cout << value << endl;
		umap.clear();
	}
}