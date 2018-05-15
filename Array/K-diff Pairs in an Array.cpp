class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int, int> temp;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            temp[nums[i]] += 1;
        }
        if(k < 0){
            return 0;
        }
        if(k == 0){
            for(map<int, int>::iterator it=temp.begin(); it!=temp.end(); ++it){
                if(it->second > 1){
                    count++;
                }
            }
        }
        if(k > 0){
            for(map<int, int>::iterator it=temp.begin(); it!=temp.end(); ++it){
                if(temp.find(it->first + k) != temp.end()){
                    count++;
                }
            }
        }
        return count;
    }
};