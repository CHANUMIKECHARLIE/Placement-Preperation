#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={3,1,3};
    int n=3;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
            cout<<"Missing :"<<i+1<<endl;
        if(arr[i]==arr[i+1])
            cout<<"Repeating :"<<arr[i]<<endl;
    }
    return 0;
}
