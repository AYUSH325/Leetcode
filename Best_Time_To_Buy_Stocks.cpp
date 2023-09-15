class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost = 0;
        int acc_cost = 0;
        int min = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            if (min > prices[i]) {
                min = prices[i];
            }
            cost = prices[i] - min;

            if (cost > acc_cost){
                acc_cost = cost;
            }

        }
        return acc_cost;
   }
};