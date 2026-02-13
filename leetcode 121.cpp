class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)return 0;
        int min_price=prices[0];
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_price){
                min_price=prices[i];
            }else{
            maxProfit=max(maxProfit,prices[i]-min_price);
            }
        }
        return maxProfit;
    }
};