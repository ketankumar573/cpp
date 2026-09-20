class Solution {
public:
    int maximumSum(vector<int>& a) {
        int i=0;
        int nodelete=a[i];
        int onedelete=INT_MIN;
        int res=a[i];
        for(i=1;i<a.size();i++){
            int prevnodelete=nodelete;
            int prevonedelete=onedelete;
            nodelete=max(nodelete+a[i],a[i]);
            int v2;
            if(prevonedelete==INT_MIN){
                v2=a[i];
            }
            else{
                v2=prevonedelete+a[i];
            }
            onedelete=max(v2,prevnodelete);
            res=max(res,max(onedelete,nodelete));
        }
        return res;
    }
};