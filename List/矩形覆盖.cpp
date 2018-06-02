class Solution {
public:
    int rectCover(int number) {
        int results[] = {0,1,2};
        if(number <= 2){
            return results[number];
        }
        int minusOne = 2;
        int minusTwo = 1;
        int res = 0;
        for(int i=3; i<=number; i++){
            res = minusOne + minusTwo;
            minusTwo = minusOne;
            minusOne = res;
        }
        return res;
    }
};