#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int a, b, c, qtda, qtdb, qtdc, total=0;
		cin >> a >> b >> c;
		qtda = a/2;
		qtdb = b/3;
		qtdc = c/5;
		if(qtda<=qtdb && qtda<=qtdc){
			total = qtda;
		}else if(qtdb<=qtda && qtdb<=qtdc){
			total = qtdb;
		}else if(qtdc<=qtdb && qtdc<=qtda){
			total = qtdc;
		}
		cout << total << endl;
	return 0;
}

