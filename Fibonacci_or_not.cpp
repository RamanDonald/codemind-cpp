#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=0;
    int s=1;
    while(f<n){
        int t=f+s;
        f=s;
        s=t;
    }
    if(f==n){
        cout<<"True";
    }else{
        cout<<"False";
    }
}