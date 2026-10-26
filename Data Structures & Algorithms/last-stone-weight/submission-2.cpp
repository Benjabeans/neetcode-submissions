class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
// heapify twice, 2 * n(log(n)) = o(nlog(n))
//then take top 2; 

        int a;
        int b;


        while(stones.size()>1){
            make_heap(stones.begin(), stones.end());
            pop_heap(stones.begin(),stones.end());
            a = stones.back();
            stones.pop_back();
            pop_heap(stones.begin(),stones.end());
            b= stones.back();
            stones.pop_back();
            if(a!=b){
                a = a-b;
                stones.push_back(a);
                push_heap(stones.begin(),stones.end());

            }else{
                if(stones.size() == 0){
                    return 0;
                }
            }

        }

        return stones[0];

    }
};
