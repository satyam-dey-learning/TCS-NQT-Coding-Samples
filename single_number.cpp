// using XOR it is easy to do
// n^n = 0
// n^0 = n

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;
        }
        return ans;
}

int main(){
    vector<int> vec={1,2,3,1,5,3,2,6,9,8,5,6,8};
    cout<<singleNumber(vec)<<endl;
    return 0;
}