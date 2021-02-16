#include <bits/stdc++.h>
using namespace std;

int sumDigits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n /= 10;
	}
	return sum;
} 

int main(){
	setlocale(LC_ALL,"");
	
	return 0;
}

