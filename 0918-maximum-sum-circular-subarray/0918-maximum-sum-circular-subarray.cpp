class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int bestending=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=bestending+nums[i];
            int v2=nums[i];
            bestending = max(v1,v2);
            maxSum = max(maxSum,bestending);
        }
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        bestending=nums[0];
        int minSum=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=bestending+nums[i];
            int v2=nums[i];
            bestending = min(v1,v2);
            minSum = min(minSum,bestending);
        }
        if((sum-minSum)==0){
            return maxSum;
        }
        else{
            return max(maxSum,(sum-minSum));
        }
    }
};