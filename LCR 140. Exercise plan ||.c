//Give a linked list with a head node "head" that record a series IDs, find and return the node correponding to the cnt-th ID from the end.


//Definition for singly-linked list.
//  struct ListNode
//{
//int val;
//struct ListNode *next;
//};
 

struct ListNode* trainingPlan(struct ListNode* head, int cnt)
{
    if (head == NULL || cnt <= 0)  return NULL;
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    for (int i = 0; i < cnt; i++)
    {
        if (fast == NULL)  return NULL;
        fast = fast -> next;
    }
    while (fast != NULL)
    {
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow;
}
