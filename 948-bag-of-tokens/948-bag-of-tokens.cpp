class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i = 0,j = tokens.size()-1;
        int score = 0;
        while(i<=j){
            if(tokens[i]<=power){
                power -= tokens[i++];
                score++;
            }
            else if(j!=i && score>=1){
                power += tokens[j--];
                score--;
            }
            else{
                break;
            }
        }
        return score;
    }
};