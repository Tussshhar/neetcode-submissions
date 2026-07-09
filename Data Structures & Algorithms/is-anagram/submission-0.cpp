class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()==t.size()){
            int count[26] = {0};
            for(char c:s){
                count[c-'a']++;
            }
            for(char f:t){
                count[f-'a']--;
            }
            for(int m=0;m<26;m++){
            if(count[m]!=0){
                return false;
            }
            }
            return true;
        }
        else{
            return false;
        }
    }
};
