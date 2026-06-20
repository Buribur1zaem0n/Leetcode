//Give a singly linked list reference node "head", each node's value is either 0 or 1. It is known that this linked list represents an integer number in binary form.
//return the decimal value of the number represented by this linked list.
//the most significant bit is at the head of the linked list.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 
int getDecimalValue(struct ListNode* head) 
{
    int result = 0;
    while (head != NULL)
    {
        result = result * 2 + head->val;  //or result = (result << 1) | head->val;
        head = head->next;
    }
    return result;
}
