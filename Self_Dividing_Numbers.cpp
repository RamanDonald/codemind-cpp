#include<bits/stdc++.h>
using namespace std;
bool selfDividingNum(int n){
    int c1=0;
    int c2=0;
    int k=n;
    while(n!=0){
        int r=n%10;
        if(r==0){
            return false;
        }
        c1++;
        if(k%r==0){
            c2++;
        }
        n=n/10;
        
    }
    if(c1==c2){
        return true;
    }else{
        return false;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(selfDividingNum(i)){
            cout<<i<<" ";
        }
    }
}