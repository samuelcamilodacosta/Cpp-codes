#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int a, b, q, r;
		cin >> a;
		cin >> b;
		r= a%b;
		q = a/b;
		if(r<0){
			if(b>0){
				while(r<0){
					q = q-1;
					r = r+b;
				}
			}else{
				while(r<0){
					r = r-b;
					q = q+1;
				}	
			}
		}
		
		cout << q << " " << r << endl;
	return 0;
}

