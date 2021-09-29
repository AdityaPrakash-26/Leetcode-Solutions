/*
Accepted
10/10 cases passed (72 ms)
Your runtime beats 99.77 % of cpp submissions
Your memory usage beats 67.73 % of cpp submissions (90.3 MB)
*/

/*
 * @lc app=leetcode id=384 lang=cpp
 *
 * [384] Shuffle an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> original;
    int n;
    Solution(vector<int>& nums) {
        original = nums;
        n = nums.size();
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        //make a copy of the original
        vector<int> shuffled = original;
        
        int leftSize = n;
        for(int i = n-1; i>=0; i--) {
            //draw from the bag
            int j = rand()%leftSize;
            
            //put this element at current position
            //and put the original element in the bag
            swap(shuffled[i], shuffled[j]);
            leftSize--;
        }
        return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
// @lc code=end

