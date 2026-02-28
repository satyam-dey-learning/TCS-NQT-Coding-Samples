#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}

int main(){
    int start, end, sum=0;
    cout<<"Enter the value of start: ";
    cin>>start;
    cout<<"Enter the value of end: ";
    cin>>end;
    for (int i = start; i <= end; i++)
    {
        if(isPrime(i)){
            cout<<i<<endl;
            sum+=i;
        }
    }
    cout<<"Sum of prime numbers in that range: "<<sum<<endl;
    return 0;
}