#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        str[0] = toupper(str[0]);
        if (str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }

    cout << str;
    return 0;
}