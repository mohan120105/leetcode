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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int k = 0;
        ListNode* ptr = head;
        while (ptr != nullptr) {
            k++;
            ptr = ptr->next;
        }
        if(n==k){
            ptr = head;
            head = head->next;
            delete ptr;
            return head;
        }
        if (n > k)
            return nullptr;
        n = k-n;
        ptr = head;
        for (int i = 1; i < n; i++) {
            ptr = ptr->next;
        }
        if (ptr->next && ptr->next->next ) {
            ptr->next = ptr->next->next;
        } else {
            ptr->next = nullptr;
        }
        return head;
    }
};