class Solution {
public:
    const int MOD=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        long long psum=0;
        long long oddcnt=0;
        for(int i=0;i<arr.size();i++){
            psum+=arr[i];
            if(psum%2==1){
                oddcnt++;
            }
        }
        oddcnt += ((long long)arr.size() - oddcnt) * oddcnt;
        return oddcnt%MOD;
    }
};
