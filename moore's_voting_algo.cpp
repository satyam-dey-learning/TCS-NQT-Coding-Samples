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
    int n = nums.size();
    int freq = 0, ans=0;
    for (int i = 0; i < n; i++)
    {
        if(freq == 0)
            ans = nums[i];
        if(ans == nums[i])
            freq++;
        else
            freq--;
    }
    int count = 0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }

    if (count > n/2) return ans;
    else return -1;
    

    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 1, 5, 1, 2, 6, 9, 8, 1, 6, 8};
    cout << majority_element(vec) << endl;
    return 0;
}