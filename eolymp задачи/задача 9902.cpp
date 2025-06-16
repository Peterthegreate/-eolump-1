#include <iostream>      
using namespace std;
int main() {
    long long n, b, c;
    cin >> n;
    b = -1;
    c = 0;
    while (b < n){
        b = b + 2;
        c = c + 1;
    }
    if(b>n or b == n){
        c = c - 1;
        cout << c << endl;
    } else{
        cout << c << endl;
    }
}
