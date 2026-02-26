/*
 * Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is
to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered
valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the
input string.
● (*>#): positive integer
● (#>*): negative integer
● (#=*): 0

 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int a = 0, b = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '#')
            a++;
        else if (str[i] == '*')
            b++;
    }
    cout << b - a << endl;

    return 0;
}