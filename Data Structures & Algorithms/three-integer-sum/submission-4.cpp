class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {


        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        int size = nums.size();
        int num;
        int target;
        int j, k;
        for(int i = 0; i < size-2; i++){
            target = -nums[i];
            int j = i+1;
            int k = size-1;
            while(j<k){
                num = nums[j]+nums[k];
                if(target == num){
                    result.push_back(vector<int>{nums[i],nums[j],nums[k]});
                    while(k>j&&nums[j]==nums[j+1]){
                        j++;
                    }
                    j++;
                }else if(num < target){

                    while(k>j&&nums[j]==nums[j+1]){
                        j++;
                    }
                    j++;
                }else{
                    while(k>j&&nums[k]==nums[k-1]){
                        k--;
                    }
                    k--;
                }
            }
            while(i<(size-2)&&nums[i]==nums[i+1]){
                i++;
            }
        }

        return result;



            

        
    }
};
