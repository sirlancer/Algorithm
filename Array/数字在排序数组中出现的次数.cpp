class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int count = 0;
        if(data.size() > 0){
            int firstK = getFirstK(data, k, 0, data.size());
            int lastK = getLastK(data, k, 0, data.size());
            if(firstK > -1 && lastK > -1)
                count = lastK - firstK + 1;
        }
        return count;
    }
    int getFirstK(vector<int> data, int k, int start, int end){
        if(start > end){
            return -1;
        }
        int middle = (start + end)/2;
        if(data[middle] == k){
            if((middle>0 && data[middle-1] !=k) || middle == 0){
                return middle;
            }
            else{
                end = middle - 1;
            }
        }
        else if(data[middle] > k){
            end = middle - 1;
        }
        else{
            start = middle + 1;
        }
        return getFirstK(data, k, start, end);
    }
    int getLastK(vector<int> data, int k, int start, int end){
        if(start >  end){
            return -1;
        }
        int middle = (start + end) / 2;
        if(data[middle] == k){
            if((middle < data.size()-1 && data[middle+1] !=k) || middle == data.size()-1 )
                return middle;
            else
                start = middle + 1;
        }
        else if(data[middle] < k)
            start = middle + 1;
        else
            end = middle -1;
        return getLastK(data, k, start, end);
    }
};