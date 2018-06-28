/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    TreeNode* KthNode(TreeNode* pRoot, unsigned int k)
    {
        if(pRoot == nullptr || k==0){
            return nullptr;
        }
        return KthNodeCore(pRoot, k);

    }
    TreeNode* KthNodeCore(TreeNode* pRoot, unsigned int& k){
        TreeNode* target = nullptr;
        if(pRoot->left != nullptr){
            target = KthNodeCore(pRoot->left, k);
        }
        if(target == nullptr){
            if(k == 1){
                return pRoot;
            }
            k--;
        }
        if(target == nullptr && pRoot->right != nullptr){
            target = KthNodeCore(pRoot->right, k);
        }
        return target;
    }
    
};