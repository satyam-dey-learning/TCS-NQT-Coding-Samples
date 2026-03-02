#include <iostream>
using namespace std;

int main()
{
    int n, square;
    cout << "Enter the number: ";
    cin >> n;
    square = n * n;
    bool check = true;
    int temp = n;
    while (temp > 0)
    {
        if (temp % 10 == square % 10)
        {
            check = false;
        }
        temp /= 10;
        square /= 10;
    }

    if (check)
    {
        cout<<n<<" is not an Automorphic Number."<<endl;
    }
    else
    {
        cout<<n<<" is an Automorphic Number."<<endl;
    }
    return 0;
}