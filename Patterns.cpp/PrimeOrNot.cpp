#include<iostream>
using namespace std;
int main()
{
    int n=11;
    bool isprime=true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            isprime=false;
        }
    }
    if(isprime==true)
    {
        cout<<"prime number"<<endl;
    }
    else
    {
        cout<<"non prime"<<endl;
    }
    return 0;
}