class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0;
        int max_ending=nums[i];
        int min_ending=nums[i];
        int res=nums[i];
        for(i=1;i<nums.size();i++){
            int v1=max_ending * nums[i];
            int v2=min_ending * nums[i];
            int v3=nums[i];
            max_ending = max(max(v1,v2),v3);
            min_ending = min(min(v1,v2),v3);
            res = max(res, max(max_ending,min_ending));
        }
        return res;
    }
};