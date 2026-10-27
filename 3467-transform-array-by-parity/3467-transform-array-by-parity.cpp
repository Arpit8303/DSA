class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans;
        for(int i=0;i<=n-1;i++){
            if(nums[i]%2==0) {
                nums[i] = 0;
                ans.push_back(nums[i]);
            }
            else{
                nums[i]=1;
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};