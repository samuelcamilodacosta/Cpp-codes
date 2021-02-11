#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define st first
#define nd second

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

vvi AdjList;
vector<bool> vstd;

void init(int vertex){
	vstd.clear();
	vstd.assign(vertex,false);
	AdjList.clear();
	AdjList.resize(vertex);
}
void dfs(int from){
	vstd[from] = true;
	printf("Vértice %d\n", from);
	for(auto v:AdjList[from]){
		if(!vstd[v]){
			dfs(v);
        }
    }
}

int main(){
	int vertex, edges;
	int from, arrival;
	scanf("%d %d", &vertex, &edges);
	init(vertex);
	for (int i = 0; i < edges; ++i){
		scanf("%d %d", &from, &arrival);
		AdjList[from].pb(arrival);
		AdjList[arrival].pb(from);
	}
	dfs(0);
	return 0;
}
