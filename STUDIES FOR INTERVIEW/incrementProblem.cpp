#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    int n = A.size();
    map<int, int> m;
    for(int i = 0; i < n; i++){
        if(m.find(A[i]) != m.end()){
            int index = m[A[i]];
            A[index] = A[index]+1;
            m[A[index]] = index;
        }
        m[A[i]] = i;
    }
    return A;
}

int main(){
	vector<int> v;
	v.push_back(1); v.push_back(3); v.push_back(2); v.push_back(2); v.push_back(3); v.push_back(1); v.push_back(4); v.push_back(2); v.push_back(1); v.push_back(3);
	v = solve(v);
	for(int i=0; i<v.size(); i++){
		cout << v[i];
	}
	return 0;
}