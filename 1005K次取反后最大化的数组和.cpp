class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        //每次翻转最小的。
        //有负数就会变正
        //没有负数翻转最小的最总体和影响最小。
        for(int i=0; i<k; i++){
            int min_position = min_element(nums.begin(),nums.end()) - nums.begin();
            nums[min_position] = -nums[min_position];
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};