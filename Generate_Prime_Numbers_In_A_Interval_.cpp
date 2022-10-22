#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int  i,a,b;
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    }
}