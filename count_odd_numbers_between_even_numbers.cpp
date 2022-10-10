#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]%2==0 && arr[i+2]%2==0 && arr[i+1]%2==1)
        {
            
            k=k+1;
        }
    }
    cout<<k;
}