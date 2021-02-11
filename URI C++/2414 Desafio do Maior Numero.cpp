#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int num, maior;
	inicio:
		cin >> num;
		if(num==0){
			cout << maior << endl;
			return 0;
		}
		if(num>maior){
			maior = num;
		}
		goto inicio;
}

