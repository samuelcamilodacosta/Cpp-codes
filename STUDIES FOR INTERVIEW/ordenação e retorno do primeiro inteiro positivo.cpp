#include <bits/stdc++.h>
using namespace std;

int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    int i=0;
    while(i<n){
        if(A[i]>0 && A[i]<=n){
            if(A[i]!=A[A[i]-1]){
                swap(A[i],A[A[i]-1]);
            }else i++;
        }else i++;
    }
    int res=n+1;
    for(int i=0;i<n;i++){
        if(A[i]!=i+1) return i+1;
    }
    return res;
}

int main(){
	setlocale(LC_ALL,"");
	
	return 0;
}

