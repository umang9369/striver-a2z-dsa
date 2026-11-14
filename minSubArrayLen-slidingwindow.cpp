class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,sum=0,i=0;
        for(int j=0;j<nums.size();++j){//expell window
            sum+=nums[j];
            while(sum>=target){
                ans=min(ans,j-i+1);
                sum-=nums[i];//shrink window
                i++;
            }
        }
        if(ans==INT_MAX)return 0;
        return ans;
    }
};
