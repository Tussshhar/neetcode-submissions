class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int j=1;j<nums.size();j++){
        for(int i=0;i<j;i++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
        }
        return false;
    }
};