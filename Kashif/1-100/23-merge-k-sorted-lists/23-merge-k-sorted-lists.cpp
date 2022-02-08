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
    ListNode* merge(vector<ListNode*>& lists, int left, int right);
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(k==0)
            return NULL;
        else if(k==1)
            return lists[0];
        ListNode *head,*h1,*h2,*ptr;
        head = h1 = h2 = NULL;
        h1 = merge(lists,0,k/2);    //Merge 1st half
        if(k/2+1 <= k-1)
            h2 = merge(lists,k/2+1,k-1);    //Merge 2nd half
        
        //Merge h1 and h2 into head
        if(!h1 and !h2) //No list is present
            return head;
        else if(!h1)    //Only 2nd list is present
            return h2;  
        else if(!h2)    //Only 1st list is present
            return h1;
        
        if(!h1 or (h1 and h1->val>h2->val))
        {   head = h2;  h2=h2->next;    }
        else
        {   head = h1;  h1=h1->next;    }
        
        ptr = head;
        while(h1 or h2)
        {
            if(!h1)
            {   ptr->next = h2;   h2=h2->next;  ptr=ptr->next;  }
            else if(!h2)
            {   ptr->next = h1;   h1=h1->next;  ptr=ptr->next;  }
            else if(h1->val < h2->val)
            {   ptr->next=h1;   h1=h1->next;    ptr=ptr->next;  }
            else
            {   ptr->next=h2;   h2=h2->next;    ptr=ptr->next;  }
        }
        return head; 
    }
};

ListNode* Solution::merge(vector<ListNode*>& lists, int left, int right){
     if(left==right)     //Only 1 list,therefore can't be merged
            return lists[left];
        
        int k = right-left+1;   //No of current lists
        ListNode *head,*h1,*h2,*ptr;
        head = h1 = h2 = NULL;
        h1 = merge(lists,left,left+k/2-1);    //Merge 1st half and store its head in h1
        h2 = merge(lists,left+k/2,right); //Merge 2nd half and store its head in h2
        
        //Merge h1 and h2 into head
        if(!h1 and !h2) //No list is present
            return head;
        else if(!h1)    //Only 2nd list is present
            return h2;
        else if(!h2)    //Only 1st list is present
            return h1;
        
        if(!h1 or (h1 and h1->val>h2->val))
        {   head = h2;  h2=h2->next;    }
        else
        {   head = h1;  h1=h1->next;    }
        
        ptr = head;
        while(h1 or h2)
        {
            if(!h1)
            {   ptr->next = h2;   h2=h2->next;  ptr=ptr->next;  }
            else if(!h2)
            {   ptr->next = h1;   h1=h1->next;  ptr=ptr->next;  }
            else if(h1->val < h2->val)
            {   ptr->next=h1;   h1=h1->next;    ptr=ptr->next;  }
            else
            {   ptr->next=h2;   h2=h2->next;    ptr=ptr->next;  }
        }
        return head;
}