class Solution {
public:
    string intToRoman(int num) {
        map<int, string> mp={
            {1,"I"},
            {4, "IV"}, 
            {5, "V"}, 
            {9, "IX"}, 
            {10, "X"}, 
            {40, "XL"}, 
            {50, "L"}, 
            {90, "XC"}, 
            {100, "C"}, 
            {400, "CD"}, 
            {500, "D"}, 
            {900, "CM"}, 
            {1000, "M"}};  
        string ans="";
        for (auto it = mp.rbegin(); it != mp.rend(); ++it){
            while(num>=it->first){
                ans+=it->second;
                num-=it->first;
            }
        }
        return ans;
    }
};