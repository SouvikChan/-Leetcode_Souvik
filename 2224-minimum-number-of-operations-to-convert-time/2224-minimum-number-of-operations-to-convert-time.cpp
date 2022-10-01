class Solution {
public:
    int convertTime(string current, string correct) {
        int hour1=(current[0]-'0')*10+(current[1]-'0');
        int hour2=(correct[0]-'0')*10+(correct[1]-'0');
        int minute1=(current[3]-'0')*10+(current[4]-'0');
        int minute2=(correct[3]-'0')*10+(correct[4]-'0');
        int totalTime=(hour2-hour1)*60+(minute2-minute1);
        int res=0;
        if(totalTime>=60){
            int temp=(totalTime/60);
            totalTime-=(temp*60);
            res+=temp;
        }
        if(totalTime>=15){
            int temp=(totalTime/15);
            totalTime-=(temp*15);
            res+=temp;
        }
        if(totalTime>=5){
            int temp=(totalTime/5);
            totalTime-=(temp*5);
            res+=temp;
        }
        res+=totalTime;
        return res;
    }
};