 Sumário
1- Número Primo O(log N);
2- Fibonacci O(N);
3- Busca Binária O(log N);
4- Kadane’s Algorithm O(N);
5- LCS (Longest Commom Subsequence) O(M*N)
6- LCSub (Longest Commom Substring) O(M*N)
7- BFS(node) O(V+E) adj[x]: adjacency list for node x
8- DFS (node) O(V+E)
9- DSU (Disjoint Set Union / Union-Find)
10- Kruskal’s Algorithm
11- Euclid ALgorithm (Greatest Common Divisor) O(logA+logB)
12- Euclid Algorithm (Least Common Multiple)

Template para programar

#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define _ << “, “ <<
#define cl(x, v) memset((x), (v), sizeof(x))

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> plll;
typedef vector<int> vi;
typedef vector<vi> vii;

const int N = 1e5+5;

Teste de número primo O(log N)

boolean isPrime(int n) {
    for (int x = 2; x <= sqrt(n); x++) {
        if (n % X == 0) {
            return false;
        }
     }
     return true;
}

Fibonacci em tempo O(n)

int fib(int n) { 
    int a = 0, b = 1, c, i; 
    if( n==0){
        return a;
	}
    for(i = 2; i <= n; i++){ 
       c = a + b; 
       a = b; 
       b = c; 
    } 
    return b; 
} 

Busca Binária O(log N)

int buscabinaria(int vet[], int x, int n){
     int l=0, r=n, m;
     while(l<=r){
	m=(l+r)/2;
	if(vet[m]==x){
	     return m;
	}else if(vet[m]<x){
	     l=m+1;
	}else{
	     r=m-1;
	}
     }
     return -1;
}

Kadane’s Algorithm (Max sum of a sequence) O(n)

void kadane(vector<int>& vet){
    int max_atual = 0, max_total = -1;
    int size_vet = vet.size();
    for(int i=0; i<size_vet; i++){
        max_atual = max_atual + vet[i];
        if(max_atual < 0){
            max_atual = 0;
        }
        if(max_atual>max_total){
            max_total = max_atual;
        }
    }
    cout << "Soma máxima: " << max_total << endl;
}
int main(){
    vector<int> vet(5);
    vet[0] = -2; vet[1] = 5; vet[2] = -1; vet[3] = 2; vet[4] = -3;
    kadane(vet);
    return 0;
}

LCS (Longest Commom Subsequence)  Maior Subsequência em Comum O(M*N)

const int N = 1e3; //Maximum string length
char s1[N], s2[N];
int m[N][N], len1, len2;

int lcs (){
     len1 = strlen(s1);
     len2 = strlen(s2);
     for (int i = 1; i <= len1; i++)
	for(int j = 1; j <= len2; j++)
	     if (s1[i-1] == s2[j-1])
		m[i][j] = 1 + m[i-1][j-1];
	     else
		m[i][j] = max(m[i][j-1], m[i-1][j]);
     return m[len1][len2];
}

LCSub (Longest Common Substring) Maior Substring em Comum O(M*N)

const int N = 1e3; //Maximum string length
char s1[N], s2[N];
int m[N][N], len1, len2;

int lcsub (){
     int ans = 0;
     len1 = strlen(s1);
     len2 = strlen(s2);
     for (int i = 1; i <= len1; i++)
	for(int j = 1; j <= len2; j++)
	     if (s1[i-1] == s2[j-1])
		m[i][j] = 1 + m[i-1][j-1];
	     ans = max(ans, m[i][j]);
	}
     return ans;
}

BFS (Breadth-First Search)

const int N = 1e5+10; // Maximum number of nodes
int vis[N];
vi adj[N];
queue <int> q;

void bfs (int s) {
    cl(vis, 0);
    vis[s] = 1;
    q.push(s);
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (auto v : adj[u]){
            if (!vis[v]){
                vis[v] = 1;
                q.push(v);
            }
        }
    }
}

DFS (Depth-First Search)

const int N = 1e5+10;
int vis[N];
vi adj[N];

void dfs(int u){
    vis[u] = 1;
    for (int v : adj[u]) 
        if(!vis[v]) 
            dfs(v);
}

DSU (Disjoint Set Union / Union-Find)
int par[N], sz[N];
int find (int a){ return par[a] == a ? a : par[a] = find(par[a]); }
void unite (int a, int b){
     if((a = find(a)) == (b = find(b))) return;
     if(sz[a] < sz[b]) swap(a, b);
     sz[a] += sz[b];
     par[b] = a;
}

int main(){
     for (int i=0; i<N; i++) par[i] = i, sz[i] = 1;
}

//WITH PARTIAL PERSISTENCE
// his: history: time when it got a new parent
// t: current time

int t, par[N], sz[N], his[N];
int find (int a, int t){
     if (par[a] == a) return a;
     if (his[a] > t) return a;
     return find(par[a], t);
}

void unite (int a, int b){
     if (find(a, t) == find(b, t)) return;
     a = find(a, t), b = find(b, t), t++;
     if (sz[a] < sz[b]) swap (a, b);
     sz[a] += sz[b];
     par[b] = a;
     his[b] = t;
}

int main() {
     for (int i=0; i<N; i++) par[i] = i, sz[i] = 1, his[i] = 0;
}

// WITH ROLLBACK
// Undo last operation

int par[N], sz[N];
stack <pii> sp, ss;

int find (int a) { return par[a] == a ? a : find(par[a]); }

void unite (int a, int b) {
     if ((a = find(a)) == (b = find (b))) return;
     if (sz[a] < sz[b]) swap(a, b);
     ss.push({a, sz[a]});
     sp.push({b, par[b]});
     sz[a] += sz[b];
     par[b] = a;
}

void rollback() {
     par[sp.top().st] = sp.top().nd; sp.pop();
     sz[ss.top().st] = ss.top().nd; ss.pop();
}

int main () {
     for (int i = 0; i < N; i++) par[i] = i, sz[i] = 1;
}

Kruskal’s Algorithm (Minimal Spanning Tree – Increasing Edge Size)

// +DSU (Disjoint Set Union / Union-Find)

int cost = 0;
vector <piii> edges; //mp(dist, mp(node1, node2))

sort(edges.begin(), edges.end());
for (auto e : edges)
    if (find(e.nd.st) != find(e.nd.nd))
        unite(e.nd.st, e.nd.nd), cost += e.st;
    
Greatest Common Divisor (Euclid Algorithm) O(logA+logB)

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

Least Common Multiple (Euclid Algorithm) O(logA+logB)

ll lcm (ll a, ll b) { return (a/gcd(a,b))*b; }
