#include<iostream>
#include<vector>
#include<climits>
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left, *right;

   TreeNode (int x) : val(x) {
      left = right = NULL;
   }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) 
            return true;

        else if(p == nullptr || q == nullptr)
            return false;
        
        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};