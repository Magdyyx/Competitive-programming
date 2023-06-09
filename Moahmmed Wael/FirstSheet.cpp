// https://leetcode.com/problems/squares-of-a-sorted-array/
/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++){
            nums[i] = abs(nums[i] * nums[i]);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
*/
//***************************************************
// https://leetcode.com/problems/xor-operation-in-an-array/
/*
class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        for (int i=0 ; i<n; i++){
            nums[i] = start + 2 * i;
        }
        int ans = nums[0];
        for (int i=1; i<n; i++){
            ans ^= nums[i];
        }
        return ans;
    }
};
*/
//****************************************************
// https://leetcode.com/problems/defuse-the-bomb/
/*
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        int sum, temp;
        vector<int>ans;
        if (k>0){
            for (int i=0; i<n; i++){
                sum = 0;
                temp = i+1;
                for (int j = 0; j<k; j++){
                    sum += code[temp++ % n];
                }ans.push_back(sum);
            }
        }else if (k<0){
            k = abs(k);
            reverse(code.begin(), code.end());
            for (int i=0; i<n; i++){
                sum = 0;
                temp = i+1;
                for (int j = 0; j<k; j++){
                    sum += code[temp++ % n];
                }ans.push_back(sum);
            }
            reverse(ans.rbegin(), ans.rend());
        }else{
            for (int i =0; i<n; i++){
                ans.push_back(0);
            }
        }
        return ans;
    }
};
*/
//************************************************
// https://leetcode.com/problems/move-zeroes/
/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        // sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++){
            if (nums[i] != 0){
                ans.push_back(nums[i]);
            }
        }for (int i=ans.size(); i<=nums.size(); i++){
            ans.push_back(0);
        }
        for (int i=0; i<nums.size(); i++){
            nums[i] = ans[i];
        }
    }
};
*/
//****************************************************
// https://leetcode.com/problems/running-sum-of-1d-array/
/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int sum;
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i=1; i<n; i++){
            sum = 0;
            for (int j=i; j>=0; j--){
                sum += nums[j];
            }ans.push_back(sum);
        }
        return ans;
    }
};
*/
//***************************************************
// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
/*
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // set_intersection(vec1.begin->end, vec2.begin->end,  back_inserter(storage_place)
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set_intersection(nums1.begin(),nums1.end(), nums2.begin(), nums2.end(), back_inserter(ans));
        return ans;
    }
};
*/
//****************************************************
// https://leetcode.com/problems/contains-duplicate/description/
/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // bool run = false;
        // for (int i=0; i<nums.size(); i++){
        //     for (int j=i+1; j<nums.size(); j++){
        //         if (nums[i] == nums[j]){
        //             run = true;
        //             break;
        //         }
        //     }
        // }
        // return run;
        bool run = false;
        map<int, int> mp;
        for (int i=0 ; i<nums.size(); i++){
            mp[nums[i]]++;
            if (mp[nums[i]] > 1){
                run = true;
            }
        }
            return run;
    }
};
*/
//**********************************************************
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
/*
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        vector<string> vec;
        for (int i=0; i<nums.size(); i++){
            vec.push_back(to_string(nums[i]));
        }for (int i=0; i<nums.size(); i++){
            if (vec[i].size() % 2 ==0){
                count++;
            }
        }
        return count;
    }
};
*/
//***********************************************************
// https://leetcode.com/problems/sort-array-by-parity/description/
/*
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        list<int> ans;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]%2==0){
                ans.push_front(nums[i]);
            }else{
                ans.push_back(nums[i]);
            }
        }
        vector<int> vec{begin(ans), end(ans)};
        return vec;
    }
};
*/
//**********************************************************
// https://leetcode.com/problems/shuffle-the-array/description/
/*
    class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int firstX = 0, firstY = n;
        vector<int> ans;
        for (int i=firstX, j=firstY; i<n, j<nums.size(); i++,j++){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
*/
//******************************************************
// https://leetcode.com/problems/valid-anagram/description/
/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s==t? true:false);
    }
};
*/
//******************************************************
// https://leetcode.com/problems/two-sum/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> result;
        // for(int i =0; i<nums.size(); i++){
        //     for (int j = i+1; j<nums.size(); j++){
        //         if (nums[i] + nums[j] == target){
        //             result.push_back(nums[i]);
        //             result.push_back(nums[j]);
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        int n = nums.size();
        int i=0,j=i+1;
         while(i<j) {
           if(nums[i]+nums[j]==target){
               return {i,j};
           } else if(j==n-1) {
               i++;
               j = i+1;
           } else {
               j++;
           }
        }
        return {};
    }
};
*/
