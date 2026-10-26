class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){

        unordered_map<int, vector<int>> fmap;
        unordered_map<int, int> umap;

        int max_freq = 0;

        for(int n : nums){

            if(umap.count(n)){
                umap.find(n)->second++;

            }else{
                umap.insert({n, 1});
            }

                
        }

        for (const auto& [key, value]: umap){

            if (max_freq<value){
                max_freq = value;
            }

            if(fmap.count(value)){

                fmap.find(value)->second.push_back(key);


            }else{
                fmap.insert({value, vector<int>{key}});
            }

        }

        vector<int> result;
        while(true){



            if(fmap.count(max_freq)){

                for (int n : fmap.find(max_freq)->second){

                    result.push_back(n);
                    k--;
                    if(k<=0){

                        return result;
                    }                    
                }
            }

            max_freq--;

        }

        
    }
};
