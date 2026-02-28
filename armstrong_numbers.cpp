#include <iostream> //headerfile
#include <cmath>    //headerfile for mathematical work
using namespace std;

int main()
{
    int y, count = 0, n, digit, sum = 0, temp, w;
    cout << "Enter the number = ";
    cin >> n;
    temp = n; // to check the two numbers are equal or not
    while (temp > 0)
    {
        y = temp % 10;
        count++;
        temp /= 10;
    } // for counting the number of digits in a number
    w = n;
    while (w > 0)
    {
        digit = w % 10; // for the last digit
        sum = sum + pow(digit, count);
        w /= 10; // to take the number without last
        // cout<<sum<<endl;   //for my checking
    }
    if (sum == n)
        cout << "Armstrong  Number ";
    else
        cout << "not Armstrong Number";
    return 0;
}