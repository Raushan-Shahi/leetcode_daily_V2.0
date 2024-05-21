#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private: 
void subset_recurssion(vector<int> &nums, int n, int ind,vector<int>temp, vector<vector<int>> &res){
    if(ind>= n){
        res.push_back(temp);
        return;
    }
    temp.push_back(nums[ind]);
    subset_recurssion(nums, n, ind+1, temp, res);
    temp.pop_back();
    subset_recurssion(nums, n, ind+1, temp, res);
    return;
}

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        subset_recurssion(nums, nums.size(), 0, temp, ans);
        return ans;
    }
};

int main()
{

    return 0;
}