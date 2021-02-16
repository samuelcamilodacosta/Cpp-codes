#include <bits/stdc++.h>
using namespace std;

vector<int> freqQuery(vector<vector<int>> queries) {
    unordered_map<int, int> umap;
    vector<int> ans;
    long a, b, i, r=0, r0=0, tam=queries.size();
    for (i = 0; i < tam; i++){
        a = queries[i][0];
        b = queries[i][1];
        if(a==1){
            umap[b]++;
        }else if(a==2){
            if(umap[b]>0){
                umap[b]--;
            }
        }else{
        	unordered_map<int, int>::iterator it;
        	for(it=umap.begin(); it!=umap.end(); it++){
        		if((it->second) == b){
        			ans.push_back(1);
        	        r++;
        	        break;
        		}
        	}
            if(r0<r){
                r0 = r;
            }else{
                ans.push_back(0);
            }
        }
    }
    return ans;
}

int main (){
	
	return 0;
}