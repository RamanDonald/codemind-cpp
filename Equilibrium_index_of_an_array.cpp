#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int k=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum-=arr[i];
            if(sum==sum2){
                cout<<i<<endl;
                k=1;
            }
            sum2+=arr[i];
        }
        if(k==0){
            cout<<-1;
        }
    }
}