class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int st=0;
        int end=letters.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(letters[mid]<=target)
                st=mid+1;
            else 
                end=mid-1;
        }
        if(st==letters.size())
            return letters[0];
        return letters[st];
    }
};