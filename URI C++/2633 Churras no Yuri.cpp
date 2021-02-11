#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	vector<pair <int,string>> vet; 	
	int n, n1;
	string carne;
	int data;
	while(cin >> n){
		n1 = n;
		while(n>0){
			cin >> carne;
			cin >> data;
			vet.push_back(make_pair(data,carne));
			n--;
		}
		sort(vet.begin(), vet.end());
		for(int i=0; i<n1; i++){
			if(i+1 == n1){
				cout << vet[i].second << endl;
			}else{
				cout << vet[i].second << " ";
			}
		}
		vet.clear();
	}
	return 0;
}

