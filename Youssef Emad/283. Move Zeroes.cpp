#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int firstZeroIndex = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (firstZeroIndex == -1)
        {
            if (nums[i] == 0)
            {
                firstZeroIndex = i;
            }
        }
        else
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[firstZeroIndex]);
                firstZeroIndex++;
            }
        }
    }
}

int main()
{
    vector<int> nums{0, 0, 1};
    moveZeroes(nums);
    for (auto &el : nums)
    {
        cout << el << " ";
    }
    return 0;
}