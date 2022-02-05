/*
Accepted
70/70 cases passed (702 ms)
Your runtime beats 34.16 % of cpp submissions
Your memory usage beats 75.79 % of cpp submissions (9 MB)
*/

/*
 * @lc app=leetcode id=312 lang=cpp
 *
 * [312] Burst Balloons
 */

// @lc code=start
class Solution {
public:
    int n;
    int t[501][501]; // For memoization
    int solve(vector<int> &nums, int i, int j){
		// BASE CASES
		if(i > j)
			return 0;
        if(i == j){    // Only one element exists
            int temp = nums[i];
            if(i - 1 >= 0)  
                temp *= nums[i - 1];
            if(i + 1 < n)
                temp *= nums[i + 1];
            return temp;
        }
		if(t[i][j] != -1)  // Check if the solution is already stored for this subproblem
			return t[i][j];
        int ans = 0;
		
		// For all elements in the range i to j, we choose all of them one by one 
		// to make them the last balloon to be burst. 
        for(int k = i; k <= j; k++){
		
		    // Burst the kth balloon after bursting (i, k - 1) and (k + 1, j) balloons
            int temp = nums[k];
			
            if(j + 1 < n)  // As balloon j + 1 will become adjacent to k after bursting  k + 1 to j balloons
                temp *= nums[j + 1];
				
            if(i - 1 >= 0) // As balloon i- 1 will become adjacent to k after bursting  i  to k -1 balloons
                temp *= nums[i - 1];
				
			// Recursively solve the left and right subproblems and add their contribution
            temp += (solve(nums, i, k - 1) + solve(nums, k + 1, j));
			
			// If this choice of k yields a better answer
            ans = max(ans, temp);
        }
        return t[i][j] = ans;
    }
    
    int maxCoins(vector<int>& nums) {
        memset(t, -1, sizeof(t));
		
        // Insert two dummy balloons of value 1 to handle the balloons on the corner.
		vector<int> arr = {1};
        for(int x: nums) 
			arr.push_back(x);
        arr.push_back(1);
        n = arr.size();
		
		//Start from i = 1 and j = arr.size() - 2 since first and last balloons are dummy.
        return solve(arr, 1, arr.size() - 2);
    }
};
// @lc code=end

