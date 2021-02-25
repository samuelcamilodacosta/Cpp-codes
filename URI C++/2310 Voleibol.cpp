#include <bits/stdc++.h>
using namespace std;

int main(){
	int num, s=0, b=0, a=0, s1=0, b1=0, a1=0;
	int x, y, z, x1, y1, z1;
	string string;
	cin >> num;
	while(num>0){
		cin >> string;
		cin >> x >> y >> z >> x1 >> y1 >> z1;
		s += x; b += y; a += z;
		s1 += x1; b1 += y1; a1 += z1;
		num--;
	}
	double r1, r2, r3;
	r1 = (s1*100.00)/s;
	r2 = (b1*100.00)/b;
	r3 = (a1*100.00)/a;
	cout.precision(2);
	cout << "Pontos de Saque: " << fixed << r1 << " %."<< endl;
	cout << "Pontos de Bloqueio: " << fixed << r2 << " %."<< endl;
	cout << "Pontos de Ataque: " << fixed << r3 << " %."<< endl;
	return 0;
}