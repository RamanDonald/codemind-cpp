#include<bits/stdc++.h>
using namespace std;
bool check_ugly(int n){
    int sum2=1;
    int k=n;
    if(n==1){
        return true;
    }
    for(int i=2;i<=n;i++){
        if(n%i==0 &&(i==2 || i==3 || i==5)){
            while(n>0 && n%i==0){
                sum2=sum2*i;
                n=n/i;
            }
        }
    }
    if(sum2==k){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(check_ugly(n)){
        cout<<"Ugly Number"<<endl;
    }else{
        cout<<"Not Ugly Number"<<endl;
    }
    
}