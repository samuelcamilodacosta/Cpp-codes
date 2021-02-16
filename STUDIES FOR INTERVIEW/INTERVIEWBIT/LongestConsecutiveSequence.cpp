                                                                                                                                                                                                                                                                #include <bits/stdc++.h>
using namespace std;

int Solution::longestConsecutive(const vector<int> &A) {
    int m=1,r=1,a=0;
    vector<int> v=A;
    sort(v.begin(),v.end());
    a=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]-a==1){
            r++;
            m=max(m,r);
        }
        else if(v[i]!=a) r=1;
        a=v[i];
    }
    return m;
}

int main(){
    
    return 0;
}
