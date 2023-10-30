bool compare(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second < p2.second;
}

class Solution
{
public:
    int bit_counter(int num)
    {
        int count = 0;
        while (num > 0)
        {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int> &arr)
    {

        vector<pair<int, int>> v;

        for (int i = 0; i < arr.size(); i++)
            v.push_back({arr[i], bit_counter(arr[i])});

        sort(v.begin(), v.end(), compare);
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
            ans.push_back(v[i].first);
        return ans;
    }
};