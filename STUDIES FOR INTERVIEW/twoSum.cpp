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

vi twoSum(const vi &A, int B) {
    unordered_map<int, int> map;
    vi result;
    for(int i = 0; i < A.size(); i++){
        if(map.find(A[i]) == map.end()){
            if(map.find(B-A[i]) == map.end())
            	map[B-A[i]] = i;
        } 
        else{
            result.pb(map[A[i]] + 1);
            result.pb(i + 1);
            return result;
        }
    }
    return result;
}
int main(){
	vi A, x; int B;
	A.pb(3);A.pb(4);A.pb(5);A.pb(6);A.pb(7);
	B = 10;
	x = twoSum(A,B);
	cout << x[0] << endl;
	cout << x[1] << endl;
	return 0;
}