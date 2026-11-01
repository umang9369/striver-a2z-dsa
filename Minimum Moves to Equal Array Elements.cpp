class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi= *min_element(nums.begin(),nums.end());
        int temp=0;
        for(int i=0;i<nums.size();++i){
            temp+=maxi-nums[i];
        }
        return -temp;
    }
};
