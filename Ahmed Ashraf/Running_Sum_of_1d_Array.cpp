#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {

        vector<int> vec;

        vec.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i - 1];

            vec.push_back(nums[i]);
        }

        return vec;
    }
};

int mian()
{
    Solution s;
    vector<int> vec = {1, 3, 5, 3, 2, 4, 2, 5, 8, 9, 6, 4};

    for (auto &elem : s.runningSum(vec))
        cout << elem << " ";

    return 0;
}