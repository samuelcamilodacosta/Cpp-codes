#include <bits/stdc++.h>
using namespace std;

int Solution::kthsmallest(const vector<int> &A, int B) {
    int n = A.size(), min = A[0], max = A[0];
    for(int i = 0; i < n; i++){
        if(A[i] < min) min = A[i];
        if(A[i] > max) max = A[i];
    }
    int mid = (min+max)/2, counter1 = 0, counter2 = 0;
    while(!(counter1 < B && counter2 >= B)){
        counter1 = 0, counter2 = 0;
        for(int i = 0; i < n; i++){
            if(A[i] < mid) counter1++;
        }
        for(int i = 0; i < n; i++){
            if(A[i] <= mid) counter2++;
        }
        if(counter2 < B){
            min = mid+1;
            mid = (min+max)/2;
        }
        if(counter1 >= B){
            max = mid;
            mid = (min+max)/2;
        }
    }
    return mid;
}

int main(){

    return 0;
}
