class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int nzero = 0;
        int zero_index = 0;
        int product = 1;
        vector<int> result(nums.size(), 0);

        for(int i = 0; i< nums.size();i++){

            if(nums.at(i) == 0){
                nzero++;
                zero_index = i;
            }else{
                product *= nums.at(i);
            }
        }


        if(nzero>1){
            return result;
        }else if (nzero ==1 ){

            result.at(zero_index) = product; 

        }else{
            
            for(int i = 0 ; i < nums.size(); i++){
    
                result.at(i) = product/nums.at(i);
            }

        
        }

        return result;
    }
};
