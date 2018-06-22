class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index <= 0){
            return 0;
        }
        int number = 0;
        int count = 0;
        while(count <  index){
            ++number;
            if(isUglyNumber(number)){
                ++count;
            }
        }
        return number;
    }
    bool isUglyNumber(int number){
        while(number%2 == 0){
            number /= 2;
        }
        while(number%3 == 0){
            number /= 3;
        }
        while(number%5 == 0){
            number /= 5;
        }
        return (number == 1) ? true : false;
    }
};