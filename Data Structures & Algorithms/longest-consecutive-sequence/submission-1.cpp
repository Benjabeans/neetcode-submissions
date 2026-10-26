class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, int> hmap;
        for (int n : nums){

            if(!hmap.count(n)){
                hmap.insert({n,0});
            }

        }

        int max_length = 0;
        int ck = 0;
        int *buffer_val;
        for(auto&[key, val] : hmap){
            
            ck = key;

            if(val != -1){
                
                val++;
                while(hmap.count(ck+1)){
                    ck++;
                    buffer_val = &hmap.find(ck)->second;
                    if(*buffer_val == 0){
                        *buffer_val = -1;
                        val++;
                    }else if (*buffer_val > 0){
                        
                        val += *buffer_val;
                        *buffer_val = -1;
                    }else{
                        break;
                    }

                }

            }


            max_length = val> max_length? val : max_length;

        }

        return max_length;
        
    }
};
