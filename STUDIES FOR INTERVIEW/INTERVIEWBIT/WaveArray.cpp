#include <bits/stdc++.h> 
using namespace std;

vector<int> Solution::wave(vector<int> &A) {
    int tam = A.size(); 
    int i = 0;
    sort(A.begin(), A.end());
    for(i = 0; i<tam-1; i+=2){
        swap(A[i], A[i+1]);
    }
    return A;
}

int main(){

    return 0;
}
