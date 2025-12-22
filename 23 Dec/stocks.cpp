#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m_price=prices[0];
        int m_profit=0;

        for (int i = 1; i < prices.size();i++) {
            m_price =min(m_price,prices[i]);
            m_profit =max(m_profit,prices[i]-m_price);
        }
        return m_profit;
    }
};

int main(){
    vector<int> prices={7,1,5,3,6,4};
    Solution s;
    cout << s.maxProfit(prices);

    return 0;

}
