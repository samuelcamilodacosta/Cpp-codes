#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 vector<TreeNode*> solve(int l, int r) {
    if(l > r) return vector<TreeNode*>{NULL};
    vector<TreeNode*> res;
    for(int root = l; root <= r; root++) {
        vector<TreeNode*> lefts = solve(l, root - 1);
        vector<TreeNode*> rights = solve(root + 1, r);
        for(TreeNode* left : lefts) {
            for(TreeNode* right : rights) {
                TreeNode* rootNode = new TreeNode(root);
                rootNode -> left = left;
                rootNode -> right = right;
                res.push_back(rootNode);
            }
        }
    }
    return res;
}
 
vector<TreeNode*> Solution::generateTrees(int A) {
    return solve(1, A);
}

int main(){
    
    return 0;
}
