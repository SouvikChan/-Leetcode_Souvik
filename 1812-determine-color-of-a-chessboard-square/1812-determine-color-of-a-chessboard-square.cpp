class Solution {
public:
    bool squareIsWhite(string cor) {
        if((cor[0]-'a'+1)%2==(cor[1]-'0')%2)
            return false;
        return true;
    }
};