class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    if ((i == 0) && (j == 0))
                        count += 4;

                    else if ((i == 0) && (j != 0))
                        count += (4 - (2 * grid[i][j - 1]));

                    else if ((i != 0) && (j == 0))
                        count += (4 - (2 * grid[i - 1][j]));

                    else
                        count += (4 - (2 * grid[i - 1][j]) - (2 * grid[i][j - 1]));
                }
            }
        }
        return count;
    }
};