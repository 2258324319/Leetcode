class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int hold = -1;//-1表示没持有任何票，其他正数表示持有票的买进价格
        int interest = 0;
        
        if(prices.size()==1){
            return 0;
        }
        for(int i=1; i<prices.size(); i++)
        {
            
            if(hold==-1)
            {//如果手上没股票
                if(prices[i]<prices[i-1]){//如果明天的价格和今天一样或者更少，就再等等
                    
                }
                else if(prices[i]>=prices[i-1]){
                    interest -= prices[i-1];
                    hold = prices[i-1];
                }//如果明天更贵，今天就买
            }
            if(hold!=-1)//如果手上有股票
            {
                if(prices[i]>=prices[i-1]){
                   
                }//如果在赚钱，并且明天比今天赚的多，今天就不卖
                else if(prices[i]<prices[i-1]){
                    interest += prices[i-1];
                    hold = -1;
                }//如果在赚钱，并且明天比今天赚的少，今天卖出
            }
        }

        if(hold!=-1){//如果最后一天手上还有股票，就卖掉
            interest+=prices[prices.size()-1];
            hold = -1;
        }
        return interest;
    }
};