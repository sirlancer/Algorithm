class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int left = 0;
        int right = rotateArray.size()-1;
        int resIndex;
        while(rotateArray[left] >= rotateArray[right]){
            if(right-left == 1){
                resIndex = right;
                break;
            }
            int mid = (left+right)/2;
            if(rotateArray[left] <= rotateArray[mid]){
                left = mid;
            }
            else if(rotateArray[right] >= rotateArray[mid]){
                right = mid;
            }
        }
        return rotateArray[resIndex];
    }
};