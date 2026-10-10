class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprice=prices[0];
        int maxprofit=0;
        for(int i=1;i<n;i++){
            int mini=prices[i];
            minprice=min(mini,minprice);
            int maxpro=prices[i]-minprice;
            maxprofit=max(maxpro,maxprofit);
        }
        return maxprofit;
    }
};