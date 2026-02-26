/*
 *  A chocolate factory is packing chocolates into the packets. The chocolate packets here 
 * represent an array of N number of integer values. The task is to find the empty packets(0) of 
 * chocolate and push it to the end of the conveyor belt(array). Click here to see solution
Example 1 : N=8 and arr = [4,5,0,1,9,0,5,0].

There are 3 empty packets in the given set. These 3 empty packets represented as O should be pushed towards the end of the array
 */

#include <iostream>
using namespace std;

int main()
{
    int N, i;
    cout << "Enter the number of integer: ";
    cin >> N;
    int arr[N];
    cout << "Enter the values of array a: " << endl;
    for (i = 0; i < N; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }

    int flag = 0;
    for (i = 0; i < N; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i],arr[flag]);
            flag++;
            // cout << arr[i] << " ";
        }
    }
    // cout<<endl;
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}