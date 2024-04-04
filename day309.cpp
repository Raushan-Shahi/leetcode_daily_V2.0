#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        stack<string> st;
        int maxm = 0;
        for (auto i : s)
        {
            if (i == '(')
            {
                st.push("(");
                maxm = max(maxm, int(st.size()));
            }
            else if (i == ')')
                st.pop();
        }
        return maxm;
    }
};