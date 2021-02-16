#include <bits/stdc++.h>
using namespace std;

vector<int> Solution::nextGreater(vector<int> &A) {
    if(A.size()==0)
        return A;
    vector<int> v(A.size(), 0);
    v.back() = -1;
    if(A.size() == 1)
        return v;
    for(int i=A.size()-2; 0<=i; i--){
        if(A[i]<A[i+1])
            v[i] = A[i+1];
        else
        {
            int j;
            for(j=i+1; j<A.size()-1 && v[j]<=A[i]; j++);
            v[i] = v[j];
        }
    }
    return v;
}

int main(){
    
    return 0;
}
