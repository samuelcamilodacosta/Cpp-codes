#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	cout << "A = " << s1 << ", B = " << s2 << ", C = " << s3 << endl;
	cout << "A = " << s2 << ", B = " << s3 << ", C = " << s1 << endl;
	cout << "A = " << s3 << ", B = " << s1 << ", C = " << s2 << endl;
	return 0;
}

