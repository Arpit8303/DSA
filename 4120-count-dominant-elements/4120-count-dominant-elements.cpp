class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        long long avg = 0;
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            if(i==0){
          if(nums[i]>=nums[i+1]){
            count++;
          }
            }
            else if(i==n-1){
                if(nums[i]>nums[i-1]){
                    count++;
                }
            }
          else {
            avg = (long long)nums[i-1]+ nums[i+1];
            if(2LL*nums[i]>=avg){
                count++;
            }
          }
        }
        return count;
    }
};