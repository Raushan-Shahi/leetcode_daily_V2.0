class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), flag =0, ans =0;
        for(int i=n-1; i>=0; i--){
            if(flag ==0  && s[i] == ' ')
                continue;
            else if (flag == 1 && s[i] == ' ')
                break;
            else{
                ans++;
                flag =1;
            }
        }
        return ans;
    }
};