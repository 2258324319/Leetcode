class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count;
        int max;
        count = nums[0];
        max = count;
        for(int i = 1; i < nums.size(); i++)
        {
            if(count<0)
            {
                count = 0;
            }
            count += nums[i];
            if(count > max)
            {
                max = count;
            }
        }

        return max;
        
    }
};