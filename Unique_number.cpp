#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    set<int>s;
    while(n>0){
        int rem=n%10;
        s.insert(rem);
        c++;
        n=n/10;
    }
    if(s.size()==c){
        cout<<"Unique Number";
    }
    else{
         cout<<"Not Unique Number";
    }
}