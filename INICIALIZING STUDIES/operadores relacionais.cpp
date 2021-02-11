#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	//True representa o valor 1
    //False representa o valor 0
	
	cout << (5 > 7) << endl;
	cout << (5 < 10 ) << endl;
	cout << ("a" > "b") << endl;
	cout << (200 == 200 ) << endl;
	
	cout << (1 >= 1) << endl;
	cout << ("x" > "y") << endl;
	cout << ("10" > "10") << endl;
	
	bool b = true;
    bool b2 = (1 == 1);

    cout << "O valor contido em 'b' é igual a: " << b << endl;
    cout << "O valor contido em 'b2' é igual a: " << b2 << endl;

    bool c = 0;
    bool c2 = 1;

    cout << "O valor é: " << (c2 == true) << endl;
	
	return 0;	
}
