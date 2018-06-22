class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int totalCount = 0;
        for(int i=1; i<=n; i++){
            totalCount += numberOf1(i);
        }
        return totalCount;
    }
    int numberOf1(int n){
        int count = 0;
        while(n > 0){
            if(n % 10 == 1){
               ++count; 
            }
            n = n / 10;
        }
        return count;
    }
};