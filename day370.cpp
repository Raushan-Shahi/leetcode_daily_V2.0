class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        int ans =0;
        int flag =0;
        for (auto it =mp.begin(); it != mp.end(); it++)
        {
            if(it->second%2 !=0 && flag ==0)
            {
                ans+= ((it->second)/2)*2 +1;
                flag = 1;
            }
            else
                ans += ((it->second)/2)*2;
        }
        return ans;
    }
};