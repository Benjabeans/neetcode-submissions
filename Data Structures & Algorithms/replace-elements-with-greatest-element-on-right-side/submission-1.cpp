class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int size_index = arr.size()-1;
        int largest = arr.back();
        int temp;
        arr.back() = -1;

        for(int i = 1 ; i < arr.size(); i++){


            if (arr[size_index-i]>largest){
                temp = largest;
                largest = arr[size_index-i];

                arr[size_index-i] = temp;

            }else{

                arr[size_index-i] = largest;

            }

        }


        return arr;

        
    }
};