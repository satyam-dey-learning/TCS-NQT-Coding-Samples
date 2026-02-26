/*
 * An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A
company manager wants to make the production of both types of vehicle according to the
given data below:
● 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
● 2nd data, Total number of wheels = W
The task is to find how many two-wheelers as well as four-wheelers need to manufacture as
per the given data.

 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, w;
    cout << "Enter the total number of vehicles: ";
    cin >> v;
    cout << "Enter the total number of wheels: ";
    cin >> w;
    int tw, fw;
    if((w>=2) && (w%2==0) && v<w){
        tw=(4*v-w)/2;
        fw=(w-2*v)/2; //v-tw

        cout<<"Number of two wheelers is "<<tw<<endl;
        cout<<"Number of four wheelers is "<<fw<<endl;
    }
    else
        cout<<"invalid input";

    return 0;
}