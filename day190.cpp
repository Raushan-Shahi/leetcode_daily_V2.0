#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    string largestOddNumber(string& num) {
        for(int i=num.size()-1; i>=0; i--){
            if (num[i]&1)
                return move(num.substr(0, i+1));
        } 
        return "";     
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();