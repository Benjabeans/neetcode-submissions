class Solution {
public:
    bool isPalindrome(string s) {

        int front = 0;
        int back = s.size()-1;


        while(true){

            while(!isalnum(s[back])){
                back--;
            }
            while(!isalnum(s[front])){
                front++;
            }

            if(back<=front){
                break;
            }

            if(tolower(s[back]) != tolower(s[front])){
                return false;
            }


            back--;
            front++;
        }

        return true;


        
    }
};
