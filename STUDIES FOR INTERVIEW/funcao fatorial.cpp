#include <bits/stdc++.h>
using namespace std;

// fatorial O(n)

int fatorial(int n) {
	if (n < 0) {
		return -1;
	} else if (n==0){
		return 1;
	}else {
		return n * fatorial(n-1);
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	return 0;
}

