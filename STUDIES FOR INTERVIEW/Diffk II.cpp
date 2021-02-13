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

int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int,int> map;
    for(auto x : A){
        if(map.find(x+B) != map.end()  || map.find(x-B) != map.end() ){
            return 1;
        }
        map[x] ++;
    }
    return 0;
}

int main(){
	
	return 0;
}