class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                int a=nums[i]+nums[j];
                if(a==target && i!=j){
                    return {j,i};
                }
            }
        }
        return {};
    }
};
