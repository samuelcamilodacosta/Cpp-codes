#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    unordered_map<int,int> m1,m2,m3;
    unordered_set<int> s;
    vector<int> ans;
    for(int i : A) 
        m1[i]++;
    for(int i : B) 
        m2[i]++;
    for(int i : C) 
        m3[i]++;
    for(int i : A) 
        if(m2.count(i) || m3.count(i)) 
            s.insert(i);
    for(int i : B) 
        if(m1.count(i) || m3.count(i)) 
            s.insert(i);
    for(int i : C) 
        if(m1.count(i) || m2.count(i)) 
            s.insert(i);
    for(int i : s) 
        ans.push_back(i);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
	vector<int> A, B, C, ans;
	A = {1, 2, 3}; B = {1,3}; C = {2,4};
	ans = solve(A, B, C);
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
