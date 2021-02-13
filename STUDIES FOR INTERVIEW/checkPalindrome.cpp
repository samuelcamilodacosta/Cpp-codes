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

int Solution::solve(string A) {
    map <char,int> map;
    for(auto x: A) map[x]++;
    int flag=0,flag1=0;
    for(auto x : map){   
        if( x.second % 2 == 0 )
            continue;
        else if( flag == 0 ){
            flag = 1;
        }
        else{
            flag1 = 1;
            break;
        }
    }
    if(flag1 == 1)
        return 0;
    return 1;
}

int main(){
	
	return 0;
}