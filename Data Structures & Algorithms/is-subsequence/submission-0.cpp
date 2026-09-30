class Solution {
public:
    bool isSubsequence(string s, string t) {
        if  ( t.size() < s.size()){
            return false;
        }

        int counter = 0;
        for (int i = 0; i < t.size(); i++){
            if(s[counter] == t[i]){
                counter++;
            }
            if (counter == s.size()){
                return true;
            }
        }
        return false;
    }
};