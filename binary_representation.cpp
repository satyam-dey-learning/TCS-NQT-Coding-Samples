/*
  Joseph is learning digital logic subject which will be for his next semester.
  He usually tries to solve unit assignment problems before the lecture.
  Today he got one tricky question. The problem statement is “A positive integer has been
  given as an input. Convert decimal value to binary representation.
  Toggle all bits of it after the most significant bit including the most significant bit.
  Print the positive integer value after toggling all bits”.
 */

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int num;
    cout<<"Enter the number: ";
    cin >> num;
    if(num==0){
        cout<<0;
        return 0;
    }
    while(num>=1){
        int temp = 0;
        temp = num % 2;
        vec.push_back(temp);
        num/=2;
    }
    int num2 = 0;
    int size = vec.size()-1;
    for (int i = 0; i < vec.size(); i++)
    {
        num2 += (vec[i]*pow(2,size));
        size--;
    }
    cout<<num2<<endl;
    
    return 0;
}