class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int pro =0;
        int m = prices[0];

        for(int i =0 ; i<prices.size();i++){
            pro = max(pro, prices[i] - m);
            m= min(m,prices[i]);
                    }
        
  return pro;  }
};
