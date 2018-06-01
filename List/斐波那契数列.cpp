class Solution {
public:
    int Fibonacci(int n) {
        int res[2] = {0,1};
        if(n < 2){
            return res[n];
        }
        int FibMinusOne = 1;
        int FibMinusTwo = 0;
        int FibN = 0;
        for(int i=2; i<=n; ++i){
            FibN = FibMinusOne + FibMinusTwo;
            FibMinusTwo = FibMinusOne;
            FibMinusOne = FibN;
            
        }
        return FibN;
    }
};