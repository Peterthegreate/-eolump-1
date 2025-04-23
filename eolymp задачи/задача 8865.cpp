#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    if (a % 2 == b % 2){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}
