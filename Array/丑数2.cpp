class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        int *pUglyNumbers = new int[index];
        pUglyNumbers[0] = 1;
        int *pMultiply2 = pUglyNumbers;
        int *pMultiply3 = pUglyNumbers;
        int *pMultiply5 = pUglyNumbers;
        int uglyNumberIndex = 1;
        while(uglyNumberIndex < index){
            int minUglyNumber = min((*pMultiply2)*2, (*pMultiply3)*3, (*pMultiply5)*5);
            pUglyNumbers[uglyNumberIndex] = minUglyNumber;
            while(*pMultiply2 * 2 <= pUglyNumbers[uglyNumberIndex]){
                ++pMultiply2;
            }
            while(*pMultiply3 * 3 <= pUglyNumbers[uglyNumberIndex]){
                ++pMultiply3;
            }
            while(*pMultiply5 * 5 <= pUglyNumbers[uglyNumberIndex]){
                ++pMultiply5;
            }
            ++uglyNumberIndex;
        }
        int ugly = pUglyNumbers[index-1]; 
        delete[] pUglyNumbers;
        return ugly;
        
        
    }
    int min(int number1, int number2, int number3){
        int minNumber = (number1 < number2) ? number1 : number2;
        minNumber = (minNumber < number3) ? minNumber : number3;
        return minNumber;
    }
    
};