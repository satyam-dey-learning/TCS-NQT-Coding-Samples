#include <iostream>
#include<climits>
using namespace std;

int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = INT_MIN;
    int curr_sum = 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        maxSum = max(curr_sum, maxSum);
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    cout<<"Max Sub Array: "<<maxSum;
    return 0;
}