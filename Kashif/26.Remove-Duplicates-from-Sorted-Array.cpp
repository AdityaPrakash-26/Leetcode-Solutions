class Solution {
public:
    
    /*
      Runtime: 8 ms, faster than 82.68% of C++ online submissions for Remove 
      Duplicates from Sorted Array.
      
      Memory Usage: 13.8 MB, less than 18.53% of C++ online submissions for Remove                 Duplicates from Sorted Array.
    
       Solution done with the help of STL function unique
       which returns all the unique elements from the vector 
    */
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){//Case when length == 0 return 0
            return 0;
        }
        return unique(nums.begin(),nums.end()) - nums.begin();
    }
};
