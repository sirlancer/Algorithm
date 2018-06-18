/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* reverseHead = nullptr;
        ListNode* prev = nullptr;
        ListNode* pNode = pHead;
        
        while(pNode != nullptr){
            ListNode* pNext = pNode->next;
            if(pNext == nullptr){
                reverseHead = pNode;
            }
            pNode->next = prev;
            prev = pNode;
            pNode = pNext;
        }
        return reverseHead;
    }
};