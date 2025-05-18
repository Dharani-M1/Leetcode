class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int val=0;
        int size=commands.size();
        for(int i=0;i<size;i++){
            string s = commands[i];
            if(s=="DOWN"){
                val=val+n;
            }
            else if(s=="UP"){
                val=val-n;
            }
            else if(s=="RIGHT"){
                val=val+1;
            }
            else{
                val=val-1;
            }

        }

        return val;
        
    }
};