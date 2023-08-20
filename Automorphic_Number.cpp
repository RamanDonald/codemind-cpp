#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    int l=s.size();
    int sq=n*n;
    string f=to_string(sq);
    int m=f.size();
    string j=f.substr(m-l,l);
    if(s==j){
        cout<<"Automorphic Number";
    }else{
        cout<<"Not an Automorphic Number";
    }
    
}