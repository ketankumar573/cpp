class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int i=0;
        int bestending=nums[i];
        int res=nums[i];
        int maxSum=nums[i];
        int minSum=nums[i];
        for(i=1;i<nums.size();i++){
            int v1=bestending+nums[i];
            int v2=nums[i];
            bestending = max(v1,v2);
            maxSum=max(maxSum,bestending);
        }
        bestending=nums[0];
        for(i=1;i<nums.size();i++){
            int v1=bestending+nums[i];
            int v2=nums[i];
            bestending=min(v1,v2);
            minSum=min(minSum,bestending);
        }
        res=max(abs(maxSum),abs(minSum));
        return res;
    }
};