/*
    Runtime: 84 ms, faster than 56.66% of C++ online submissions for Container With Most Water.
    Memory Usage: 59 MB, less than 76.04% of C++ online submissions for Container With Most Water.

*/
#include <vector>
#include <cstdlib>
#include <algorithm>

/*
    we will take height as minimum as possible with width as maximum as possible 
    giving the end result 

*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxArea=INT_MIN;
            while(j>=i)
            {
                int minHeight=min(height[i],height[j]);
                int width=j-i; 
                int currArea=minHeight*width;    //area=height * width
                maxArea=max(maxArea,currArea);
                if(minHeight==height[i])    //if i arr[i] is smaller we increment the width
                {
                    i++; 
                }
                else    //else we decrement j
                {
                    j--;
                }
            }
            return maxArea;
    }
};
