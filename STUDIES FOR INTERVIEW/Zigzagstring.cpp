#include <bits/stdc++.h>
using namespace std;

string Solution::convert(string A, int B) {
    string sol="";
    if (B==1) return A;
    for (int j=0;j<A.size();j=j+(B-1)*2)
        sol.push_back(A[j]);
    for (int i=1;i<B-1;i++){
        int j=i;
        int count=1;
        while(j<A.size()){
            sol.push_back(A[j]);
            if (count%2==1) j=j+(B-(i+1)-1)*2+2;
            else            j=j+(i-1)*2+2;
            count++;
        }
    }
    for (int j=B-1;j<A.size();j=j+(B-1)*2)
        sol.push_back(A[j]);
    return sol;
}

int main(){
    
    return 0;
}
