/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int k=0;
        ListNode* ptr=head;
        while(ptr!=nullptr){
            k++;
            ptr = ptr->next;
        }
        ptr = head;
        k=(k/2)+1;
        for(int i=1;i<k;i++){
            ptr = ptr->next;
        }
        return ptr;
    }
};