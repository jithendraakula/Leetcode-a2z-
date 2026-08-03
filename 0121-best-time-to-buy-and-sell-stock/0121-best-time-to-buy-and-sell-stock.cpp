class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int min_price=INT_MAX;
        for(int i=0;i<prices.size();i++){
            int curr_price=prices[i];
            if(curr_price<min_price)
                min_price=curr_price;
            max_profit=max(max_profit,(curr_price-min_price));
        }
        return max_profit;
    }
};