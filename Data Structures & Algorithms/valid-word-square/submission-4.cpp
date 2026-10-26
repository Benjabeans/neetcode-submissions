class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        

        int size = words.size();

        int rowsize = 0;
        int prevrowsize;

        for (int i =size-1 ; i >=0; i--){

            prevrowsize=rowsize;
            rowsize = words.at(i).size();

            if (prevrowsize>rowsize || rowsize >size){
                return false;
            }

            if(words.at(rowsize-1).size()-1<i){
                return false;
            }

            for (int j = i; j < words.at(i).size(); j++){

                if(words.at(i).at(j)!= words.at(j).at(i)){
                    return false;



                }


            }



        }

        return true;
    }
};
