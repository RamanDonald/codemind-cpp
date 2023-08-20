#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f = 0, s = 1;
    while (s <= n) {
        int t = f + s;
        f = s;
        s = t;
    }
    int diff1 = n - f;
    int diff2 = s - n;
    if (diff1 == diff2) {
        cout << f<<" "<<s;
    } else if(diff1<diff2) {
        cout << f;
    }
    else{
        cout<<s;
    }
    return 0;
}
