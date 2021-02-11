#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int a, b, c;
	inicio:
		cin >> a >> b;
		if(a==0 && b==0){
			return 0;
		}
		c = a-(b-a);
		cout << c << endl;	
		goto inicio;
}

