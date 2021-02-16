#include <bits/stdc++.h>
using namespace std;

//fibonnaci em ordem 2^n (não usar)

int fibonacci(int n){
	if (n<=0) {
		return 0;
	}
	else if (n==1){
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	setlocale(LC_ALL,"");
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;
	return 0;
}

