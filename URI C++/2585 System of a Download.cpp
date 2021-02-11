#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
    string array[] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY",
	"SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
	int c, x, y;
	cin >> c;
	while(c>0){
		cin >> x;
		cin >> y;
		cout << array[x+y] << endl;	
		c--;
	}
	return 0;
}

