class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int len1=list1.size();
        int len2=list2.size();
        int mini=INT_MAX;
        unordered_map<int,vector<string>> mp;
        for(int i=0;i<len1;++i){
            for(int j=0;j<len2;++j){
                if(list1[i]==list2[j]){
                    mp[i+j].push_back(list1[i]);
                    mini=min(i+j,mini);
                    }
            }
        }
        return mp[mini];
    }
};