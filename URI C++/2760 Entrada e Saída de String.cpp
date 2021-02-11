#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string a, b, c;
    getline(cin, a);
	getline(cin,b);
	getline(cin,c);
	cout << a << b << c << endl;
	cout << b << c << a << endl;
	cout << c << a << b << endl;
	for(int i=0; i<10; i++){
		if(a[i]=='\0'){
			break;
		}
		cout << a[i];
	}
	for(int i=0; i<10; i++){
		if(b[i]=='\0'){
			break;
		}
		cout << b[i];
	}
	for(int i=0; i<10; i++){
		if(c[i]=='\0'){
			break;
		}
		cout << c[i];
	}
	cout << endl;
	return 0;
}
