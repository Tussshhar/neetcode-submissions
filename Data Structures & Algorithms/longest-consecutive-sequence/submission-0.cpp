class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxlength=0;
        for(int i=0;i<nums.size();i++){
        int current=nums[i];
        int length=1;
        if(st.find(current - 1) == st.end()){
        while(st.find(current+1) != st.end()){
            current++;
            length++;
        }
        if(length>maxlength){
        maxlength=length;
        }
        }
        }
        return maxlength;
    }
};
