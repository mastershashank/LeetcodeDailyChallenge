
class Solution {
public:

    int countOdds(int low, int high) {
        
        if(low == high)
        {
            if(low % 2) return 1;
            else return 0;
        }

        int res = 0;

        if(low % 2) res++;
        if(high % 2) res++;

        if(high % 2 == 0 && low % 2 == 0) res++;

        res+= ((high - low - 1) / 2);

        return res;
    }
};