class Solution {
public:

    string encode(vector<string>& strs) {
        string j="";
        for(int i=0;i<strs.size();i++){
                j=j+to_string(strs[i].size())+"#"+strs[i];
        }
        return j;
    }
    
    int l=0;
    vector<string> decode(string s) {
        vector<string> ans;
        string c="";
        for(int m=0;m<s.length();m++){
            if(isdigit(s[m])){
                c+=s[m];
            }
            else{
                l=stoi(c);
                string word = s.substr(m+1, l);
                ans.push_back(word);
                m+=l;
                c="";
            }
        }
        return ans;
    }
};
