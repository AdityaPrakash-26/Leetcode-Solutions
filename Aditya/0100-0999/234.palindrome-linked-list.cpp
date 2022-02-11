/*
Accepted
86/86 cases passed (265 ms)
Your runtime beats 60.01 % of cpp submissions
Your memory usage beats 10.15 % of cpp submissions (128.3 MB)
*/

/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> res;

        while(temp){
            res.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = res.size()-1;

        while(i<j){
            if(res[i]!=res[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end

