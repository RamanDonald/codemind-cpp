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
    int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            c=c+arr[i];
        }
        else
        {
            d=d+arr[i];
        }
    }
    cout<<abs(d-c);
}