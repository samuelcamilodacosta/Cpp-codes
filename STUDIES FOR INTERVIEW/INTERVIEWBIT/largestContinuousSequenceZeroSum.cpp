#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> plll;
typedef vector<int> vi;
typedef vector<vi> vii;

vector<int> lszero(vector<int> &A) {
    unordered_map<int,int> m; //sum,index;
    int sum = 0;
    int ansstart = 0;
    int ansend = 0;
    m[0] = -1;
    for(int i=0;i<A.size();i++){
        sum +=A[i];
        if(m.find(sum) !=m.end()){
            int t = m[sum];
            int d = i;
            if(d - t > ansend-ansstart){
                ansstart = t;
                ansend = d;
            }
        }
        else{
        m[sum] = i;
        }
    }
    vector<int> ans(A.begin()+ansstart+1,A.begin()+ansend+1);
    return ans;
}

int main(){
	
	return 0;
}
