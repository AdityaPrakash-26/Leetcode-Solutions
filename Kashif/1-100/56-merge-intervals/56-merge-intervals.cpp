class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mergedList;
        for(auto it : intervals){
            if(mergedList.empty() || mergedList.back()[1] < it[0]){
                mergedList.push_back(it);
            }else{
             mergedList.back()[1] = max(mergedList.back()[1], it[1]);
            }
        }
        
        return mergedList;
    }
};