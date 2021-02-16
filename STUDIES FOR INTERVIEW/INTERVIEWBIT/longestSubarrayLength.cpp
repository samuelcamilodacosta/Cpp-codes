#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int n=A.size();
    int s=0,mx=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
    	if(A[i]==0){
    		s--;
        }else{
            s++;
        }
        if(s==1){
            mx=i+1;
        }else if(m.find(s)==m.end()){
            m[s]=i;
        }if(m.find(s-1)!=m.end()){
            mx=max(mx,i-m[s-1]);
        }
    }
    return mx;
}

int main(){
	
	return 0;
}
