#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > Solution::prettyPrint(int A) {
    vector<vector<int> > ans;
    for(int i=1;i<(2*A);i++)
    {   
        vector<int> a;
        for(int j=1;j<(2*A);j++)
        {
            a.push_back(  max( abs(i-A), abs(j-A) ) + 1 );
        }
        ans.push_back(a);
    }
    return ans;
}

int main(){
    
    return 0;
}
