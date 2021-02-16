#include <bits/stdc++.h>
using namespace std;

int pivoteIndex(const vector<int>&arr){
    int low =0,high = arr.size()-1;
    if(arr[low] < arr[high])
        return low;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] > arr[mid+1])
            return mid+1;
        else if(arr[mid-1] > arr[mid])
            return mid-1;
        if(arr[mid] > arr[0])
            low = mid+1;
        else 
            high = mid-1;
    }
    return -1;
}
int Solution::search(const vector<int> &A, int B) {
    int pivote = pivoteIndex(A);        
    if(pivote != -1){
        int n = A.size();
        int low = pivote;
        int high = pivote+n-1;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(A[mid%n] == B)
                return mid%n;
            if(A[mid%n] > B)
                high = mid-1;
            else low = mid+1;
        }
    }
    return -1;
}

int main(){

    return 0;
}
