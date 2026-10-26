class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        unordered_map<int, int> exists ;

        for(int i = 0; i < nums.size(); i++){

            if(exists.count((int)(target-nums[i]))){

                return vector<int> {(exists.find(target-nums[i]))->second, i};
            }

            exists.insert({nums[i], i});


        }

        return vector<int>{0,0};





        

    }
};
