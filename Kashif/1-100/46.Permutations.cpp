/**
*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Permutations.
*Memory Usage: 7.7 MB, less than 58.14% of C++ online submissions for Permutations.
*
*author = "Kashif Raza" + "Leetcode Discussion"
*
*/
//vector<vector<int>> ans;

class Solution {
public:
   vector<vector<int> > permute(vector<int> &num) {
	    vector<vector<int> > result;
	    
	    permuteRecursive(num, 0, result);
	    return result;
    }
//     Recursive Function to be called by the above function!
	void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result)	{
		if (begin >= num.size()) {
		    result.push_back(num);
		    return;
		}
		
		for (int i = begin; i < num.size(); i++) {
		    swap(num[begin], num[i]);
		    permuteRecursive(num, begin + 1, result);
		    swap(num[begin], num[i]);
		}
    }
};



// STL Solution 
/**
*
*Runtime: 4 ms, faster than 72.16% of C++ online submissions for Permutations.
*Memory Usage: 7.6 MB, less than 91.92% of C++ online submissions for Permutations.
*
*author = "Kashif Raza"
*
*/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
//         STL Library Use next_permutation(iterator = begin>>>end)
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        do{
            ans.push_back(nums);
        }while(next_permutation(nums.begin(), nums.end()));
        
        return ans;
    }
};
