class Solution {
public:
    vector<int> sortArray(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            sort(nums.begin(),nums.end());
        }
return nums;
        
    }
};