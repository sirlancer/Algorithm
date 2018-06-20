class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        multiset<int, greater<int>> intSet;
        intSet.clear();
        if(k > input.size() || k < 1)
            return res;
        for(int i=0; i<input.size(); ++i){
            if(intSet.size()<k){
                intSet.insert(input[i]);
            }else{
                multiset<int, greater<int>>::iterator iterGreatest = intSet.begin();
                if(input[i] < *iterGreatest){
                    intSet.erase(iterGreatest);
                    intSet.insert(input[i]);
                }
            }
        }
        for(multiset<int, greater<int>>::iterator it=intSet.begin(); it!=intSet.end(); ++it){
           res.push_back(*it);
        }
        return res;
    }
};