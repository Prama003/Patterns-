#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,8,9,7};
    int size=5;
    int target=8;
    cout<<LinearSearch(arr,size,target)<<endl;
    return 0;
}
