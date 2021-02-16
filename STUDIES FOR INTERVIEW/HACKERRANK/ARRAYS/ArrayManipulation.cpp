#include <bits/stdc++.h>
using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {
    long tam = queries.size();
    long int *vet=new long int[n+1]();
    long sum=0, max=0, a, b, k, i;
    for(i = 0; i <= n; i++){
        vet[i] = 0;
    }
    for (i = 0; i < tam; i++) { 
        a = queries[i][0];
        b = queries[i][1];
        k = queries[i][2];
        vet[a] += k;
        if((b+1) <= n){
            vet[b+1] -= k;
        }
    }
    for(i = 0; i <= n; i++){
        sum += vet[i];
        if(sum>max) max = sum;
    }
    return max;
    delete [] vet;
}

int main(){
	
	return 0;
}