#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> deckRevealedIncreasing(vector<int> &deck)
    {
        sort(deck.rbegin(), deck.rend());
        deque<int> dq;
        dq.push_front(deck[0]);
        for (int i = 1; i < deck.size(); i++)
        {
            int back = dq.back();
            dq.pop_back();
            dq.push_front(back);
            dq.push_front(deck[i]);
        }
        vector<int> ans;
        for (int i = 0; i < deck.size(); i++)
        {
            ans.push_back(dq.front());
            dq.pop_front();
        }
        return ans;
    }
};