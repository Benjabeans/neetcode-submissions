class Solution {
public:
    int lengthOfLastWord(string s) {

        int index = s.size()-1;
        
        bool started = false;
        int count = 0;
        while(index>=0){


            if (s.at(index)!= ' '){
                started = true;
            }
            if(started){
                if (s.at(index) != ' '){

                    count++;

                }else{
                    return count;
                }
            }
            index--;



        }

        return count;
    }
};