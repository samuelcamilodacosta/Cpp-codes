#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c)!=EOF){
		if(c!=a && c!=b){
			cout << "C" << endl;
		}else if(b!=a && b!=c){
			cout << "B" << endl;
		}else if(a!=b && a!=c){
			cout << "A" << endl;
		}else{
			cout << "*" << endl;
		}
	}
	return 0;
}