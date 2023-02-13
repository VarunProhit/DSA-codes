class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi = INT_MAX,i,j,ma=0;
        mi = prices[0];
        for(i=1;i<prices.size();i++)
        {
            if(prices[i]>mi)
                ma=max(ma,prices[i]-mi);
           mi = min(prices[i],mi);
        }
        return ma;
    }
};