#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, x, y, a, b;
	inicio:
		a=0;
		b=0;
		cin >> n;
		if(n==0){
			return 0;
		}
		while(n>0){
			cin >> x >> y;
			if(x>y){
				a++;
			}else if(x<y){
				b++;
			}
			n--;
		}
		cout << a << " " << b << endl;
		goto inicio;	
}

