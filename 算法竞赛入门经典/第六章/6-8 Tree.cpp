#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>

using namespace std;

const int N = 10010;
int in_order[N], post_order[N];
int n;

struct TreeNode{
    int val;
    TreeNode *left, *right;
    TreeNode(int _val): val(_val), left(nullptr), right(nullptr) {}
};

bool get(int* a){
    string line;
    if(!getline(cin, line)) return false;
    stringstream ss(line);
    n = 0;
    int x ;
    while(ss >> x) a[n++] = x;
    return n > 0;
}

TreeNode* buildTree(int l1, int r1, int l2, int r2){
    if(l1 > r1) return nullptr;
    int val = post_order[r2];
    TreeNode* root = new TreeNode(val);
    int p = l1;
    while(in_order[p] != val) p++;
    int cnt = p - l1;
    TreeNode* leftTree = buildTree(l1, p - 1, l2, l2 + cnt - 1);
    TreeNode* rightTree = buildTree(p + 1, r1, l2 + cnt, r2 - 1);
    root->left = leftTree;
    root->right = rightTree;
    return root;
}

int best;
TreeNode* node;

void dfs(TreeNode* root, int s){
    s += root->val;
    if(!root->left && !root->right){
        if(s <= best || (s == best && root->val < node->val)){
            node->val = root->val;
            best = s;
        }
    }
    if(root->left) dfs(root->left, s);
    if(root->right) dfs(root->right, s);
}

int main(){
    ios::sync_with_stdio(false);
    while(get(in_order)){
        get(post_order);
        TreeNode* root = buildTree(0, n - 1, 0, n - 1);
        best = 10010 * 10010;
        node = new TreeNode(10010);
        dfs(root, 0);
        cout << node->val << endl;
    }
    return 0;
}
/*
 3 2 1 4 5 7 6
 3 1 2 5 6 7 4
 1
 7 8 11 3 5 16 12 18
 8 3 11 7 16 18 12 5
 3
 255
 255
 255
 */