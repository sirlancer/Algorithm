class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> temp;
        for(int i=0; i<nums.size(); i++){
            if((temp.find(nums[i]) != temp.end()) && (i-temp[nums[i]]) <= k){
                return true;
            }
            temp[nums[i]] = i;
        }
        return false;
    }
};