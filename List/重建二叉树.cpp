/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size() == 0 || vin.size()==0){
            return nullptr;
        }
        int* beginPreorder = &pre[0];
        int* endPreorder = &pre.back();
        int* beginInorder = &vin[0];
        int* endInorder = &vin.back();
        return constructCore(beginPreorder, endPreorder, beginInorder, endInorder);
        
    }
public:
    TreeNode* constructCore(int* startPreorder, int* endPreorder, int* startInorder, int* endInorder){
            int rootValue = startPreorder[0];
            TreeNode* root = new TreeNode(0);
            root->val = rootValue;
            root->left = root->right = nullptr;
            int* rootInorder = startInorder;
            while(rootInorder <= endInorder && *rootInorder != rootValue){
                rootInorder++;
            }
            int leftLength = rootInorder - startInorder;
            int* leftPreorderEnd = startPreorder + leftLength;
            if(leftLength > 0){
                root->left = constructCore(startPreorder+1, leftPreorderEnd, startInorder, rootInorder-1);
            }
            if(leftLength < endPreorder - startPreorder){
                root->right = constructCore(leftPreorderEnd+1, endPreorder, rootInorder+1, endInorder);
            }
            return root;
        }
};