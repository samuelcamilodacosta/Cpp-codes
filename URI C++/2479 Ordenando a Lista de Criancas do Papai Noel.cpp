#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, i, boa=0,ma=0;
	list <string> criancas;
	string x, y;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> x;
		if(x=="+"){
			boa++;
		}else if(x=="-"){
			ma++;
		}
		cin >> y;
		criancas.push_front(y);
	}
	criancas.sort();
	for(i=0; i<n; i++){
		cout << criancas.front() << endl;
		criancas.pop_front();
	}
	cout << "Se comportaram: "<< boa << " | Nao se comportaram: " << ma << endl;
	return 0;
}

