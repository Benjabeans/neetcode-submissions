class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length()!=t.length()){
            return false;
        }

        vector<int> hmap(26, 0);

        for(int i = 0; i < s.length(); i++){

            hmap[s[i]-'a']+=1;
            hmap[t[i]-'a']-=1;
        }

        for(int bucket:hmap ){
            if (bucket != 0){
                return false;
            }
        }

        return true;


        
    }
};
