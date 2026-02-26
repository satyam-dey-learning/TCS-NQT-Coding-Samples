#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    cout << "Enter the String: ";
    string str;
    cin >> str;
    int n = str.length();

    // Brute Force Approach--
    // for (int i = 0; i < n; i++)
    // {
    //     bool isUnique = true;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (str[i] == str[j])
    //         {
    //             isUnique = false;
    //             break;
    //         }
    //     }
    //     if (isUnique)
    //     {
    //         cout << "First non-repeating character: " << str[i];
    //         return 0;
    //     }
    // }

    // Optimised Approach--
    unordered_map<char, int> mp;

    for (auto ch : str)
    {
        mp[ch]++;
    }
    
    for (auto ch : str){
        if(mp[ch]==1){
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found";
    return 0;
}