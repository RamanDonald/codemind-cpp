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
bool check_palindrome(int n){
    int k=n;
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==k){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    int k=n+1;
    while(true){
        if(check_palindrome(k) && check_prime(k)){
            cout<<k;
            break;
        }
        k++;
    }
    
    
}