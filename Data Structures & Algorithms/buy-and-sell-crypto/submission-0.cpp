class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int lmin = prices[0];
        int lmax = prices[0];
        int pmax = 0;
        for(int p : prices){

            if(p>lmax){
                lmax = p;

                pmax = (lmax-lmin)>pmax? (lmax-lmin) : pmax;
            }else if (p<lmin){
                lmin = p;
                lmax = p;
            }

        }


        return pmax;
        
    }
};
