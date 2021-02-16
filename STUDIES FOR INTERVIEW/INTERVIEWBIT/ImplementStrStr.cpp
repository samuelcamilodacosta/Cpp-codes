#include <bits/stdc++.h>
using namespace std;

int Solution::strStr(const string A, const string B) {
    int a = A.size();
    int b = B.size();
    if(a==b && A==B)return 0;
    if(b==0 || a==0)return -1;
    int i,j;
    int x;
    for(i=0;i<a;i++){
        x=i;
        for(j=0;j<b;j++){
            if(A[i]==B[j]){
            i++;
            }
        else if(A[i]!=B[j])break;
        }
        if(j==b && i<a)return x;
        i=x;
    }
    return -1;
} 

int main(){
    
    return 0;
}
