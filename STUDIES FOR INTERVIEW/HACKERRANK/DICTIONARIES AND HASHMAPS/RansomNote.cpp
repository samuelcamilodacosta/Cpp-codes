#include <bits/stdc++.h>
using namespace std;

void checkMagazine(vector<string> magazine, vector<string> note) {
    int ans=0;
    unordered_map <string, int> umap;
    for (int i = 0; i < magazine.size(); i++){
        umap[magazine[i]]++;
    }
    for (int i = 0; i < note.size(); i++){
        umap[note[i]]--;
        if(umap[note[i]] < 0){ 
            ans++; 
            break;
        }
    }
    if(ans>0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}

int main(){

	
	return 0;
}
