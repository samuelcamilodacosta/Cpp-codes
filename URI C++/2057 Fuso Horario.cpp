#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int s, t, f, hora=0, fusodestino;
	cin >> s;
	cin >> t;
	cin >> f;
	hora = s + t + f;
	if(hora<0){
		fusodestino = hora+24;
	}else if(hora>=24){
		fusodestino = hora-24;
	}else{
		fusodestino = hora;
	}
	cout << fusodestino << endl;
	return 0;
}

