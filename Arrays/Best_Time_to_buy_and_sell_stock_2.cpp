class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        // Overall idea is to go along through the graph and find 
        // where the big valleys are
        int maxprofit = 0;
        for (int i = 1; i < prices.size(); i++){
            if (prices[i] > prices[i-1]){
                maxprofit += prices[i] - prices[i-1];
            }    
            
        }
        return maxprofit;
    }
};