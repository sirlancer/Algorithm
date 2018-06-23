class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if(str.size() == 0)
            return -1;
        int occurence[256];
        for(int i=0; i<256; i++){
            occurence[i] = -1;
        }
        for(int i=0; i<str.size(); i++){
            if(occurence[str[i]] == -1){
                occurence[str[i]] = i;
            }else if(occurence[str[i]] >=0){
                occurence[str[i]] = -2;
            }
        }
        int index = 10000;
        for(int i=0; i<256; ++i){
            if(occurence[i] >= 0 && index > occurence[i])
                index  = occurence[i];
        }
        if(index >= 0)
            return index;
        else
            return -1;
    }
};