class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int count = 1;
        int PorN = -1;
        if(nums.size()==0)
        {
            return 0;
        }
        if(nums.size()==1)
        {
            return 1;
        }
        for(int i=1; i < nums.size(); i++)
        {
            if(nums[i] > nums[i-1]){
                if(PorN==1){
                    PorN=1;
                }else if(PorN==0){
                    count++;
                    PorN=1;
                }else{
                    PorN=1;
                    count++;
                }
            }else if(nums[i] < nums[i-1]){
                if(PorN==0){
                    PorN=0;
                }else if(PorN==1){
                    count++;
                    PorN=0;
                }else{
                    PorN=false;
                    count++;
                }
            }else{
                continue;
            }
        }
        return count;
    }
};