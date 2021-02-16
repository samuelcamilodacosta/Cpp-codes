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

int Solution::colorful(int A) {
    unordered_map<int, int> map;
    int acc, a;
    while(A){
    	a = A;
    	acc = 1;
        while(a){
            acc *= a % 10;
            a /= 10;
            if(map[acc] == 1){
                return 0;
            }
            map[acc] = 1;
        }
        A /= 10;
    }
    return 1;
}

int main(){
	
	return 0;
}
