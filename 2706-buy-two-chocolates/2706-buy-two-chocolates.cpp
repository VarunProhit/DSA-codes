class Solution
{
    public:
        int buyChoco(vector<int> &prices, int money)
        {
            sort(prices.begin(), prices.end());
            int deb = money - (prices[0] + prices[1]);
            if (deb < 0) return money;
            return deb;
        }
};