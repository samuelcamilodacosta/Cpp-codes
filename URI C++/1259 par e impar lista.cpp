#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, x, contpar=0, contimpar=0;
	cin >> n;
	list <int> numerospar;
	list <int> numerosimpar;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x%2==0){
			numerospar.push_front(x);
			contpar += 1;
		}
		else{
			numerosimpar.push_front(x);
			contimpar += 1;
		}
	}
	numerospar.sort();
	for(int i=0; i<contpar; i++){
		cout << numerospar.front() << endl;
		numerospar.pop_front();
	}
	numerosimpar.sort();
	numerosimpar.reverse();
	for(int i=0; i<contimpar; i++){
		cout << numerosimpar.front() << endl;
		numerosimpar.pop_front();
	}
	
	return 0;
}

