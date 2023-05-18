#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> decrypt(vector<int> &code, int k)
    {

        int num = 0, count = -1, flag = 0;

        int siz = code.size() - 1;

        vector<int> ans;

        if (k < 0)
        {
            k *= -1;
            reverse(code.begin(), code.end());
            flag = 1;
        }

        for (int i = 0; i <= siz; i++)
        {
            count++;
            code.push_back(code[i]);

            while (i <= k - 1)
            {
                num += code[++i];
            }
            ans.push_back(num);
            num = 0;
            i = count;
            k++;
        }

        if (flag == 1)
        {
            reverse(ans.begin(), ans.end());

            return ans;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> code = {10, 5, 7, 7, 3, 2, 10, 3, 6, 9, 1, 6};
    for (auto &el : s.decrypt(code, -4))
    {
        cout << el << ' ';
    }
    return 0;
}