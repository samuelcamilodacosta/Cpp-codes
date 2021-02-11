#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, prime;
    unsigned long long int X, y, i;
    scanf("%d", &n);
	do{
        scanf("%llu", &X);
        prime = 0;
        if(X % 2 == 0 && X != 2){
                cout << "Not Prime" << endl;
        }
        else{
        	y = sqrt(X);
       		for(i = 3; i<=y;){
                if(X%i == 0){
                    prime = 1;
                    break;
				}
			    i = i+2;
			}
        if(prime == 0){
            cout << "Prime" << endl;
		}
        else{
            cout << "Not Prime" << endl;
		}
		}
    	n = n-1;
	}while(n!=0);
    return 0;
}
