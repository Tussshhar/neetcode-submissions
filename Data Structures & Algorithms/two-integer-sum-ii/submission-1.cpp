class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> v;
        int j=0;
        for(int i=0;i<numbers.size();i++){
            j=target-numbers[i];
            for(int k=i+1;k<numbers.size();k++){
                if(numbers[k]==j && i<k){
                    v.push_back(i+1);
                    v.push_back(k+1);
                    return v;
                }
                else{
                    continue;
                }
            }
        }
        return {};
    }
};
