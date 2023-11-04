#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
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
    string a;
    cin>>a;
    if(check_prime(stoi(a)) && check_prime(reverse(stoi(a)))){
        cout<<"circular prime";
    }else if(check_prime(stoi(a))){
        cout<<"prime but not a circular prime";
    }else{
        cout<<"not prime";
    }
    
    
    
    
}