#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, n;
    cin >> a >> b >> n;
    if(a*3<=b){
        cout << a*n;
        return 0;
    }
    cout << (n/3)*b+(n%3)*a;

}
