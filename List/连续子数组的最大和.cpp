class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.size() == 0){
            return 0;
        }
        int maxSum = 0x80000000;
        int curSum = 0;
        for(int i=0; i<array.size(); i++){
            if(curSum <= 0){
                curSum = array[i];
            }
            else{
                curSum += array[i];
            }
            if(curSum > maxSum){
                maxSum = curSum;
            }
        }
        return maxSum;
    }
};