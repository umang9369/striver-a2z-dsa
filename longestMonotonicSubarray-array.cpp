class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int p=1,q=1,temp=1;
        for(int i=1;i<n;++i){
            if(nums[i]>nums[i-1]){
                p++;
                q=1;
            }else if(nums[i]<nums[i-1]){
                p=1;
                q++;
            }else{
                p=1;
                q=1;
            }
            temp=max(temp,max(p,q));
        }
        return temp;
    }
};
