#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec{1,2,3,4};
    for(int val: vec)   //printing of the array/vector
    {
        cout<<val<< " ";
    }
    cout<<endl;
    return 0;
}