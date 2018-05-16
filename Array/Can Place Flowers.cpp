class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        vector<int>::iterator begin = flowerbed.begin();
        flowerbed.insert(begin, 0);
        flowerbed.push_back(0);
        for(int i=1; i<flowerbed.size()-1; i++){
            if(flowerbed[i]==0 && flowerbed[i-1] + flowerbed[i+1]==0){
                count += 1;
                flowerbed[i] = 1;
            }
        }
        return count >= n;
    }
};