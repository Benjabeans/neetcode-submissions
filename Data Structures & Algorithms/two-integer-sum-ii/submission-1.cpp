class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> result;
        int *front = &numbers.front();
        int front_index = 1;
        int *back = &numbers.back();
        int back_index = numbers.size();
        int num;
        while(true){
            num = *front+*back;
            if(num>target){
                back--;
                back_index--;
            }else if(num<target){
                front++;
                front_index++;
            }else{
                return vector<int>{front_index,back_index};
            }
        }


        
    }
};
