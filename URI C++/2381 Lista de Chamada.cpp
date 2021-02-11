#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	list <string> nomes;
	string x;
	int n, k, i;
	cin >> n >> k;
	for(i=0; i<n; i++){
		cin >> x;
		nomes.push_front(x);
	}
	nomes.sort();
	for(int i=0; i<k; i++){
		if(i+1==k){
			cout << nomes.front() << endl;
		}
		nomes.pop_front();
	}
	return 0;
}

