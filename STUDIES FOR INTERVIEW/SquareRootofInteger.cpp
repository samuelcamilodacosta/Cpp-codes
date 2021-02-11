#include <bits/stdc++.h>
using namespace std;

int Solution::sqrt(int A) {
    if(A==0 || A==1)
        return A;
    int minv = 1;
    int maxv = A/2;
    while(minv<maxv){
        int mid = (maxv+minv+1)/2;
        if(mid > A/mid){
            maxv = mid - 1;
        }
        else{
            minv = mid;
        }
    }
    return minv;
}

int main(){
    
}
