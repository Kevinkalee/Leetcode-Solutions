/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Solution is to not delete the node but swap the node with the following one
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp;
        temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp;
    }
};