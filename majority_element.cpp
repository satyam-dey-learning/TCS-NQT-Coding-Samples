#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int majority_element(vector<int> &nums)
// {
//     int n = nums.size();

//     for (int val : nums)
//     {
//         int freq = 0;

//         for (int el : nums)
//         {
//             if (el == val)
//             {
//                 freq++;
//             }
//         }
//         if (freq > n / 2)
//         {
//             return val;
//         }
//     }
//     return -1;
// }

// much optimised
int majority_element(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();

    // freq count
    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 1, 5, 1, 2, 6, 9, 8, 1, 6, 8};
    cout << majority_element(vec) << endl;
    return 0;
}