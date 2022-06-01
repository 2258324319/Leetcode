class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> change(3,0);
        //一开始5,10,20都没有
        for(int i=0; i<bills.size(); i++){
            switch(bills[i]){
                case 5:
                    change[0]++;
                    break;
                case 10:
                    if(change[0]!=0){
                        change[0]--;
                        change[1]++;
                        break;
                    }else{
                        return false;
                    }
                case 20:
                    if(change[1]!=0&&change[0]!=0){
                        change[0]--;
                        change[1]--;
                        break;
                    }else if(change[0]>=3 && change[1]==0){
                        change[0] -= 3;
                        break;
                    }else{
                        return false;
                    }
            }
        }
        return true;
    }
};