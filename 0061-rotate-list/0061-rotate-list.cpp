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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=1;
        if(head==nullptr ||k==0 || !head->next){
            return head;
        }
        ListNode* ptr = head;
        ListNode* temp = head;
        while(ptr->next!=nullptr){
            n++;
            ptr=ptr->next;
        }
        
        k = k%n;
        k = n-k;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        ListNode* ptr2 = temp->next;
        temp->next = nullptr;
        ptr->next = head;
        // head = ptr2;
        return ptr2;
    }
};