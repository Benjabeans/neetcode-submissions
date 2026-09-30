class Solution {
public:
    int appendCharacters(string s, string t) {

        int counter = 0;
        for (int i = 0; i < s.size(); i++){
            if(t[counter] == s[i]){
                counter++;
            }
            if(counter == t.size()){
                return 0;
            }
        }

        return t.size() - counter;

    }
};