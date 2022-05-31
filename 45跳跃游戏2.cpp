class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int count = 0;
        int max_step = 0;
        int point = 0;
        while(1){
            if(point + nums[point]>=nums.size()-1){
                return count+1;
            }
            for(int i=point; i<=point+nums[point]; i++){
                if(i + nums[i] > max_step + nums[max_step]){
                    max_step = i;
                }
            }
            point = max_step;
            count += 1;
        }
    }
};