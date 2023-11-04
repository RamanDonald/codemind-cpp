#include<bits/stdc++.h>
using namespace std;
bool check_prime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    int k=(a+b)+1;
    while(true){
        if(check_prime(k)){
            cout<<(k-(a+b));
            break;
        }
        k++;
    }
    
    
}