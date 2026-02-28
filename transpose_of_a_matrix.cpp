#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<"Enter the value of n: ";
    cin>>n;
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"matrix["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];
        }   
    }
    cout<<"The matrix is"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;   
    }
    cout<<"Tranpose Form:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;   
    }
    return 0;
}