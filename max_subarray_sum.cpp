// total number of subarray = n*(n+1)/2

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int maxSum = INT_MIN;

    // Find all subarray ----
    // for (int st = 0; st < n; st++)
    // {
    //     for (int end = st; end < n; end++)
    //     {
    //         for (int i = st; i <= end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    for (int st = 0; st < n; st++)
    {
        int curr_sum = 0;
        for (int end = st; end < n; end++)
        {
            curr_sum += arr[end];
            maxSum = max(curr_sum, maxSum);
        }
    }

    cout << "Max subarray sum = " << maxSum << endl;

    return 0;
}