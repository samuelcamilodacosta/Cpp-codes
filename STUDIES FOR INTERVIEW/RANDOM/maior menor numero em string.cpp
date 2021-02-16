#include <bits/stdc++.h>
using namespace std;
string Solution::solve(string a) {

	int n = a.length();

	string hex = a;  // just to store the a temporarily so 
                //that at last we can see if the string a has actually gone a change.
	string z="-1"; // just to return the -1 I am storing it in a string(good practise).

	if(n<2)  // just to care for single element or empty element in given string coz both 
		return z; //of 'em won't be undergoing any change. 

	int i1; // we are just using this to store the index of first non increasing number
           // as seen from bacck side. eg for 124321 i1 = index value of 2 i.e 1.

	bool found = false; // just to make sure that we get i1 otherwise return -1.
	for(int i = n-1;i>0;i--){
    	if(a[i-1]-'0'<a[i]-'0'){ // this part is to obtain i1
        	i1 = i-1;
        	found = true;
     		break;   
    	}
	}
	if(!found) // if i1 is not found return -1 as discussed above.
		return z;

	for(int i = n-1;i>i1;i--){
    	if(a[i]-'0'>a[i1]-'0'){
    	    swap(a[i],a[i1]);  //in this part we'll swap the a[i1] with first bigger 
    	    break;             //value from the right. a now is 134221
   	 }    
	}
	sort(a.begin()+i1+1,a.end()); //just to sort the other values after index i1,
                                //a now will be 131224 which is the ans
                                
	if(a==hex)// just to check if a has undergone change
		return z;
	else
		return a;
}
int main(){
	setlocale(LC_ALL,"");
	
	return 0;
}

