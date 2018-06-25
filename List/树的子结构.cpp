/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool res = false;
        if(pRoot1 != nullptr && pRoot2 != nullptr){
            if(pRoot1->val == pRoot2->val){
                res = doseTree1hasTree2(pRoot1, pRoot2);
            }
            if(!res){
                res = HasSubtree(pRoot1->left, pRoot2);
            }
            if(!res){
                res = HasSubtree(pRoot1->right, pRoot2);
            }
            
        }
        return res;
    }
    bool doseTree1hasTree2(TreeNode* root1, TreeNode* root2){
        if(root2 == nullptr){
            return true;
        }
        if(root1 == nullptr){
            return false;
        }
        
        if(root1->val != root2->val){
            return false;
        }
        
        return doseTree1hasTree2(root1->left, root2->left) && doseTree1hasTree2(root1->right, root2->right);
        
    }
};