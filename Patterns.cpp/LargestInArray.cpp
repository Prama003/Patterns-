#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int largest=INT16_MIN;
    for(int i=0;i<size;i++)
    {
        largest=max(arr[i],largest);
    }
    cout<<largest<<endl;
}