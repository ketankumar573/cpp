class Solution {
public:
    int maxDepth(string s) {
        int count=0 , res=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;

            }
            if(s[i]==')'){
                count--;
            }
            res=max(res,count);
        }
        return res;
    }
};