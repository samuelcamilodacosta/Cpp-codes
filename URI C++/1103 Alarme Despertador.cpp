#include <bits/stdc++.h>
using namespace std;
int main(){
	int h1, m1, h2, m2, difh, difm, resp;
	while(true){
		resp = 0;
		cin >> h1 >> m1 >> h2 >> m2;
		if(h1==0 && h2 == 0 && m1==0 && m2==0) 
			return 0;
		difm = m2 - m1;
		if(difm<0){
			difm = difm + 60;
			h2 = h2-1;
		}
		if(h1<=h2){
			difh = h2-h1;
		}else{
			difh = (24+h2)-h1;
		}
		resp = (difh*60)+(difm);
		if(resp == 1440) resp = 0;
		cout << resp << endl;
	}
	return 0;
}