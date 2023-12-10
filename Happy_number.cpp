#include<bits/stdc++.h>
using namespace std;
int sum_digit(int n){
    int s=0;
    while(n!=0){
        int r=n%10;
        s=s+(r*r);
        n=n/10;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    int k=n;
    int f=0;
    while(true){
       int l=sum_digit(k);
       if(l>9){
           k=l;
       }
       if(l<=9 &&(l==1 || l==7)){
           f=1;
           break;
       }else if(l<=9){
           break;
       }
    }
    if(f==1){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}