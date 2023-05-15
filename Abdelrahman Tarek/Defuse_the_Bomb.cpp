#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();
        int j = 1;
        int s = 0;
        int y;


        vector<int> newcode(n);

        for (y = 1; y < n; y++) {
            newcode[y] = 0;
        }

        if (k == 0) {
            return newcode;
        }

        else if (k > 0) {
            for (int i = 0; i < n; i++) {
                j = 1;
                for (int count = 0; count < k; count++)
                {
                    s = j + i;
                    if (s >= n) {
                        s -= (n);
                    }
                    newcode[i] += code[s];
                    j++;
                }
            }
        }
        else if (k < 0)
        {
            for (int i = 0; i < n; i++) {
                j = 1;
                for (int count = 0; count < abs(k); count++) {
                    s = i - j;
                    if (s < 0) {
                        s += n;
                    }
                    newcode[i] += code[s];
                    j++;
                }
            }
        }
        return newcode;
    }
};


int main() {
    Solution solution;

    //// Example 1
    vector<int> code1 = { 5, 7, 1, 4 };
    int k1 = 3;
    vector<int> decrypted1 = solution.decrypt(code1, k1);

    cout << "Decrypted Code 1: ";
    for (int num : decrypted1) {
        cout << num << " ";
    }
    cout << endl;

    // Example 2
    vector<int> code2 = { 5,2,2,3,1 };
    int k2 = -2;
    vector<int> decrypted2 = solution.decrypt(code2, k2);

    cout << "Decrypted Code 2: ";
    for (int num : decrypted2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
