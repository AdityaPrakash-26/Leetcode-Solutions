/*
 * @lc app=leetcode id=1361 lang=cpp
 *
 * [1361] Validate Binary Tree Nodes
 */

// @lc code=start
class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
         //get the root node
        vector<int> inDegree(n,0);
        for(int i=0;i<leftChild.size();i++)
        {
            if(leftChild[i]!=-1) //node i has left child
                inDegree[leftChild[i]]++;
            if(rightChild[i]!=-1) //node i has rigt child
                inDegree[rightChild[i]]++;
        }
        
        //we use level order traversal
        queue<int> q;
        
        //track all visited nodes
        unordered_set<int> visited;
        for(int i=0;i<n;i++)
        {
            if(inDegree[i]==0)
            {
                //the root node
                q.push(i);
                visited.insert(i);
                break;
            }
        }
        
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                //get every node check if left is already visited 
                //and its right child is already visited
                int front=q.front();
                q.pop();
                if(leftChild[front]!=-1)
                {
                    int left=leftChild[front];
                    //if left is already visited then it is not a valid tree
                    if(visited.count(left)){
                        return false;
                    }
                    q.push(left);
                    visited.insert(left);
                }
                
                if(rightChild[front]!=-1)
                {
                    int right=rightChild[front];
                    if(visited.count(right))
                        return false;
                    q.push(right);
                    visited.insert(right);
                }
            }
        }
        //check we have got our tree by including all the nodes
        return visited.size()==n;
    }
};
// @lc code=end

