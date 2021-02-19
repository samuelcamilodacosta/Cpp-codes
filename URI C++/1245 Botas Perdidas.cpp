#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int, int> direito;
	unordered_map<int, int> esquerdo;
	int n, num, cont;
	set<int> s;
	string lado;
	while(cin >> n){
		cont = 0;
		for(int i = 0; i < n; i++){
			cin >> num;
			cin >> lado;
			if(lado=="D"){
				direito[num]++;
				s.insert(num);
			}else{
				esquerdo[num]++;
				s.insert(num);
			}
		}
		set<int>:: iterator it;
		for(it=s.begin(); it!=s.end(); it++){
			if(direito[*it]>=1 && esquerdo[*it]>=1){
				if(direito[*it]>esquerdo[*it]){
					cont += esquerdo[*it];
				}else if(esquerdo[*it]>direito[*it]){
					cont += direito[*it];
				}else{
					cont += esquerdo[*it];
				}
			}
		}
		cout << cont << endl;
		esquerdo.clear();
		direito.clear();
	}
	return 0;
}