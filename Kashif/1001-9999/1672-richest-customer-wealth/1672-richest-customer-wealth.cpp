class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = -1;
        for(int row = 0; row < accounts.size(); row++){
            int sum = 0;
            for(int col = 0; col < accounts[0].size(); col++){
                sum += accounts[row][col];
            }
            maxWealth = max(maxWealth, sum);
        }
        
        return maxWealth;
    }
};