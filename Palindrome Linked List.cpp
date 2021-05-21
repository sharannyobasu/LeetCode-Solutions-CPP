QUESTION : https://leetcode.com/problems/palindrome-linked-list/


SOLUTION : 

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode*temp=head;
        while(temp)
        {
            s.push(temp->val);
            temp=temp->next;
        }
        while(!s.empty())
        {
            if(s.top()==head->val)
            {
                s.pop();
                head=head->next;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
