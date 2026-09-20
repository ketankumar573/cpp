class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int best_ending=nums[i];
        int res=nums[i];
        for(i=1;i<nums.size();i++){
            int v1 = best_ending + nums[i];
            int v2 = nums[i];
            best_ending = max(v1,v2);
            res = max(res,best_ending);
        }
        return res;
    }
};