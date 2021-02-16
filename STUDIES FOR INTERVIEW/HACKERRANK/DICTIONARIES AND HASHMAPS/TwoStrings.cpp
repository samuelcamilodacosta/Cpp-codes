#include <bits/stdc++.h>
using namespace std;

string twoStrings(string s1, string s2) {
    unordered_map<char, int> umap;
    int ans=0, tam = s1.length();
    string r="YES", r1="NO";
    for(int i = 0; i < tam; i++){
        if(umap[s1[i]]>0){
            continue;
        }
        umap[s1[i]]++;
    }
    tam = s2.length();
    for(int i = 0; i < tam; i++){
        umap[s2[i]]++;
        if(umap[s2[i]]>1){
            ans++;
            break;
        }
        umap[s2[i]]--;
    }
    if(ans==0){
        return r1;
    }else{
        return r;
    }
}

int main (){
	
	return 0;
}
