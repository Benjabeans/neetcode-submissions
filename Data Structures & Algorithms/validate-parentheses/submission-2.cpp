class Solution {
public:
    bool isValid(string s) {


        vector<char> last;

        unordered_set<char> count = {'(','[','{','}',']',')'};


        int b1 = 0; //()
        int b2 = 0;//[]
        int b3 = 0;//{}

        for(char c : s){

            if(count.count(c)){

                
                if ( last.size()>0 && last.back()==c){
                    
                    last.pop_back();
                    
                } else if ( c == '('){
                    last.push_back(')');
                }else if (c == '['){
                    last.push_back(']');
                }else if (c == '{'){
                    last.push_back('}');
                }else {
                    return false;
                }



            }
        }

        if (last.size()!=0){
            return false;
        }

        return true;
    }
};
