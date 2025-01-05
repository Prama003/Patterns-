#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(9);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl; //Capacity doubles itself in every step i.e, 1,2,4,8
    return 0;
}