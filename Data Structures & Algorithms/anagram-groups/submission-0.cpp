class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        unordered_map<string, vector<string>> umap;

        for(string word : strs){

            string key = word;

            sort(key.begin(),key.end());

            if(umap.count(key)){

                ((umap.find(key))->second).push_back(word);

            }else{

                umap.insert({key, vector<string>{word}});
            }



        }


        vector<vector<string>> result;
        for (const auto& [key, value] : umap){

            result.push_back(value);

        }


        return result;
    
        
    }
};
