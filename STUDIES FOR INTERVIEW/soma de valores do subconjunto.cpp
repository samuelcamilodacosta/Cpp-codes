#include <bits/stdc++.h>
using namespace std;

int Solution::maxSubArray(const vector <int> &A) {
    int gsum =INT_MIN;
    int sum=0, i;
    for(i=0; i<A.size(); i++){
        sum+= A[i];
        if(sum>gsum){
            gsum=sum;
        }
        if(sum<=0){
            start = i+1;
            sum=0;
        }
    }
    return gsum;
}

int main(){
	setlocale(LC_ALL,"");
	
	return 0;
}


