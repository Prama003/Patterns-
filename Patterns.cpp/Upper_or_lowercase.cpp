#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"it is a lower case character";
    }
    else
    {
        cout<<"it is a upper case character";
    }
    return 0;
}
