#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int p, r;
	cin >> p;
	cin >> r;
	if(p==0){
		cout << "C" << endl;
	}
	if(p==1 && r==1){
		cout << "A" << endl;
	}
	if(p==1 && r==0){
		cout << "B" << endl;
	}
	return 0;
}

