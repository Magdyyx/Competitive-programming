//--------------------------------------- Problem Link : https://leetcode.com/problems/move-zeroes/description/



#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1 - c; i++) {
            if (nums[i] == 0) {
                for (int j = i; j < n - 1; j++) {
                    swap(nums[j], nums[j + 1]);
                }
                if (nums[i] == 0) {
                    i--;
                }
                c++;
            }
        }
    }
};



int main() {
    Solution solution;

    //// Example 1
    vector<int> code1 = { 1,0,1 };

    solution.moveZeroes(code1);

    cout << "Decrypted Code 1: ";
    for (int num : code1) {
        cout << num << " ";
    }
    cout << endl;


    //// Example 2
    vector<int> code2 = { 0,1,0,3,12 };

    solution.moveZeroes(code2);

    cout << "Decrypted Code 1: ";
    for (int num : code2) {
        cout << num << " ";
    }
    cout << endl;


    //// Example 3
    vector<int> code3 = { 0,0,1 };

    solution.moveZeroes(code3);

    cout << "Decrypted Code 1: ";
    for (int num : code3) {
        cout << num << " ";
    }
    cout << endl;
}
