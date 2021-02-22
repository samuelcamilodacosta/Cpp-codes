#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y, test, cont=0;
	string name1, name2;
	while(true){
		cont++;
		cin >> test;
		if(test == 0) return 0;
		cin >> name1 >> name2;
		cout << "Teste " << cont << endl;
		while(test > 0){
			cin >> x >> y;
			if((x+y)%2 == 0){
				cout << name1 << endl;
			}else{
				cout << name2 << endl;
			}
			test--;
		}
		cout << endl;
	}
}
