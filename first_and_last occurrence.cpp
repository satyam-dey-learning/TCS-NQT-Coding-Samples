#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int target)
{
    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    cout << "First Ocuurence is at " << first;
    cout << "Last Ocuurence is at " << last;
}

int firstbinarySearch(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int lastbinarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    linearSearch(arr, n, target);
    cout << "First Ocuurence is at " << firstbinarySearch(arr, n, target);
    cout << "Last Ocuurence is at " << lastbinarySearch(arr, n, target);
    return 0;
}