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
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(pHead == nullptr){
            return nullptr;
        }
        ListNode* meetNode = meetingNode(pHead);
        if(meetNode == nullptr){
            return nullptr;
        }
        int lengthOfLoop = 1;
        ListNode* pNode = meetNode->next;
        while(pNode != meetNode){
            pNode = pNode->next;
            ++lengthOfLoop;
        }
        ListNode* fast = pHead;
        ListNode* slow = pHead;
        for(int i=0; i<lengthOfLoop; i++){
            fast = fast->next;
        }
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    ListNode* meetingNode(ListNode* pHead){
        if(pHead == nullptr){
            return nullptr;
        }
        ListNode* slow = pHead->next;
        if(slow == nullptr){
            return nullptr;
        }
        ListNode* fast = slow->next;
        while(fast != nullptr && slow != nullptr){
            if(fast == slow){
                return fast;
            }
            slow = slow->next;
            fast = fast->next;
            if(fast != nullptr){
                fast = fast->next;
            }
        }
        return nullptr;
    }
};