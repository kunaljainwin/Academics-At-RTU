class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> cnt;
        for(int i=0;i<n;i++)
            cnt[nums[i]-i]++;
        long long ans=1ll*n*(n-1)/2;
        for(auto [ignore,c]:cnt)
            ans-=1ll*c*(c-1)/2;
        return ans;
    }
};
