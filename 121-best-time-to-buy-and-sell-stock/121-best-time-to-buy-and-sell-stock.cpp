class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1) return 0;
        int maxProfit = 0;
        stack<int> stk;
        stk.push(prices[0]);
        int i = 1;
        while(i < prices.size()){
            int stkTop = stk.top();
            if(prices[i] < stkTop){
                stk.pop();
                stk.push(prices[i]);
            }else{
                int diff = (prices[i] - stkTop);
                maxProfit = max(maxProfit, diff);
            }
            i++;
        }
        return maxProfit;
    }
};