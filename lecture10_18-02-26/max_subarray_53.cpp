class Solution {
public:
    int maxSubArray(vector<int>& nums) {
   int currsum=nums[0];
   int maxsum=0;

   for(int i=1;i<nums.size();i++){
    currsum+=nums[i];
    maxsum=max(maxsum,currsum);
    if(currsum<0)currsum=0;
   }
   return maxsum;
    }
};