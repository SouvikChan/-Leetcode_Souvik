class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        for(int i=0;i<flowerbed.size()-2;i++){
            if(flowerbed[i]+flowerbed[i+1]+flowerbed[i+2]==0){
                n--;
                i++;
            }
        }
        if(n>0)
            return false;
        return true;
    }
};