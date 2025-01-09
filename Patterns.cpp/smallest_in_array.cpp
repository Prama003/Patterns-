#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,-9,7,8};
    int size=5;
    int smallest=INT16_MAX;
    for(int i=0;i<size;i++)
    {
        smallest=min(arr[i],smallest);      
    }
    cout<<smallest<<endl;
}