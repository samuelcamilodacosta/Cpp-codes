#include <bits/stdc++.h>
using namespace std;

int Solution::solve(string A) {
    int n = A.size();
    if(n==0) return 0;
    stack <int> st;
    for(int i=0;i<n;i++)
    {
        if(A[i]=='(')
            st.push(A[i]);
        else if(A[i]==')' && st.empty())
        {
            st.push(A[i]);
        }
        else if(A[i]==')' && st.top()=='(')
        {
            st.pop();
        }
        else
            st.push(A[i]);
    }
    return st.size();
}

int main(){
    
    return 0;
}
