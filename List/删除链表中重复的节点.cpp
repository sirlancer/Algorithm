/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = pHead;
        ListNode* preNode = dummyNode;
        ListNode* pNode = pHead;
        while(pNode != nullptr){
            ListNode* pNext = pNode->next;
            bool needDelete = false;
            if(pNext != nullptr && pNode->val == pNext->val){
                needDelete = true;
            }
            if(!needDelete){
                preNode = pNode;
                pNode = pNode->next;
            }
            else{
                int value = pNode->val;
                ListNode* pToBeDelete = pNode;
                while(pToBeDelete != nullptr && pToBeDelete->val == value){
                    pNext = pToBeDelete->next;
                    delete pToBeDelete;
                    pToBeDelete = nullptr;
                    pToBeDelete = pNext;
                }
                preNode->next = pNext;
                pNode = pNext;
            }
            
        }
        return dummyNode->next;
    }
};