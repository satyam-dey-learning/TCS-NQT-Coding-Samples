#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    
    string str2;
    str2 = str;
    for(int i = 0; i < str.length(); i++) {
        str2[i] = tolower(str2[i]);
    }
    
    cout<<str<<endl;
    cout<<str2;
    return 0;
}