#include <bits/stdc++.h>
using namespace std;

int main(){
	double T, Q, A, B, area;
	int cont;
	while(true){
		cont = 0;
		cin >> T;
		if(T==0) return 0;
		while(T>0){
			cont++;
			cin >> Q >> A >> B;
			area = Q*(((A+B)*5)/2);
			cout << "Size #" << cont <<":" << endl;
			cout << "Ice Cream Used: " << fixed << setprecision(2) << area << " cm2" << endl;
			T--;
		}
		cout << endl;
	}
}