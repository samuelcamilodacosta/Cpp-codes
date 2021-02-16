#include <bits/stdc++.h>
using namespace std;
int x;
int main(){
	setlocale(LC_ALL,"");
	vector <int> v {4, 1, 2, 5, 7};
	int i=0, x;
    sort(v.begin(), v.end(), [](const int& a, const int& b){ 
			return a < b;
		});
	for(i=0; i<v.size(); i++){
		if(v[i] == v[i+1] && i != (v.size()-1)){
			cout << v[i] << endl;
			break;
		}else{
			if(i==(v.size()-1)){
				cout << "-1" << endl;
			}
		} 
	}
	return 0;
}

