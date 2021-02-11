#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int c1, p1, c2, p2, r1, r2;
	cin >> p1 >> c1 >> p2 >> c2;
	r1 = p1*c1;
	r2 = p2*c2;
	if(r1==r2){
		cout << "0" << endl;
	}else if(r1>r2){
		cout << "-1" << endl;
	}else{
		cout << "1" << endl;
	}
	return 0;
}

