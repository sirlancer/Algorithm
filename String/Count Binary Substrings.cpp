class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 0;
        int consective = 1;
        vector<int> chunks;
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                consective += 1;
            }
            else{
                chunks.push_back(consective);
                consective = 1;
            }
        }
        chunks.push_back(consective);
        for(int j=0; j<chunks.size()-1; j++){
            count += min(chunks[j], chunks[j+1]);
        }
        return count;
    }
};