class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int res = numbers[0];
        int times = 1;
        for(int i=1; i<numbers.size(); i++){
            if(res == numbers[i]){
                ++times;
            }else if(times == 0){
                res = numbers[i];
                times = 1;
            }else{
                --times;
            }
        }
        if(!checkMoreThanHalf(numbers, res)){
            return 0;
        }
        return res;
    }
    bool checkMoreThanHalf(vector<int> numbers, int target){
        int times = 0;
        for(int i=0; i<numbers.size(); i++){
            if(target == numbers[i]){
                ++times;
            }
        }
        if(times * 2 <= numbers.size())
            return false;
        else
            return true;
    }
};