#include <bits/stdc++.h>
using namespace std;

int func(vector <int> a, int k){
    int n = a.size();
    int j = 0;
    int cou = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum+a[i];
        while(j <= i && sum > k){
            sum = sum-a[j];
            j++;
        }
        cou = cou + (i-j+1);
    }
    return cou;
}
int Solution::numRange(vector<int> &A, int B, int C) {
    int ans = func(A, C)-func(A, B-1);
    return ans;
}

int main(){
    
    return 0;
}
