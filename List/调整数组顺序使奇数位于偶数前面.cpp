class Solution {
public:
    void reOrderArray(vector<int> &array) {
        for(int i=0; i<array.size(); i++){
            if(array[i] % 2 == 1){
                int temp =  array[i];
                int j = i-1;
                while( j>=0 && array[j]%2 == 0){
                    array[j+1] = array[j];
                    --j;
                }
                array[j+1] = temp;
            }
        }
    }
    
};