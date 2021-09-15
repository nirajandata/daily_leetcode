class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,mi=1e6,ma=0; 
        int value= prices[0],index=0;
        int subs=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1] ){
               mi=min(prices[i],mi); 
            }
            subs=prices[i+1]-mi;
//cout <<subs <<endl;
            profit=max(subs ,profit);
        }
        cout << mi <<" " << ma <<endl;
        return profit;
    }
};
