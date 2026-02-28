#include <iostream>
using namespace std;

// Brute-Force Process---
int equilibriumIndex(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j < i; j++) // from 0 index to previous of ith index
        {
            left_sum += arr[j];
        }
        for (int j = i+1; j < n; j++) // from next to ith index to last index
        {
            right_sum += arr[j];
        }

        if (left_sum==right_sum)
        {
            return i;
        }
        
    }
    return -1;
}

int equilibriumIndex2(int arr[], int n, int totalSum){
    int leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum -= arr[i];
        if(leftSum==totalSum)
            return i;
        leftSum += arr[i];
    }
    // 1st we take the total sum of the array, next for 1st element the left sum is 0 and right sum is total sum - 1st element. Thus going on. leftsum increasing and right sum will be the total sum.
    return -1;
}

int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }

    cout << "Equilibrium Index: " << equilibriumIndex(arr, n);
    cout << "Equilibrium Index: " << equilibriumIndex2(arr, n, totalSum);
    return 0;
}