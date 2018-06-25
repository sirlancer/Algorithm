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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        int length1 = getLength(pHead1);
        int length2 = getLength(pHead2);
        int lengthDif = length1 - length2;
        
        ListNode* longHead = pHead1;
        ListNode* shortHead = pHead2;
        if(length1 < length2){
            longHead = pHead2;
            shortHead = pHead1;
            lengthDif = length2 - length1;
        }
        for(int i=0; i<lengthDif; ++i){
            longHead = longHead->next;
        }
        while(longHead != nullptr && shortHead != nullptr && longHead != shortHead){
            longHead = longHead->next;
            shortHead = shortHead->next;
        }
        ListNode* commonNode = longHead;
        return commonNode;
        
    }
    int getLength(ListNode* pHead){
        int length = 0;
        ListNode* pNode = pHead;
        while(pNode != nullptr){
            ++length;
            pNode = pNode->next;
        }
        return length;
    }
};