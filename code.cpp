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
    void reorderList(ListNode* head) {
        vector<int>A,B;
        ListNode*temp2=head;
        while(temp2!=NULL)
        {
            A.push_back(temp2->val);
            temp2=temp2->next;
            
        }
        int i=0;
        int j=A.size()-1;
          ListNode *temp=head;
        while(i<=j)
        {
            if(i==j)
            {
             
                 temp->val=A[i];
            }
            else
            {
              
                temp->val=A[i];
                temp=temp->next;
                temp->val=A[j];
                temp=temp->next;
            }
            i++;
            j--;
        }
 
    }
};
