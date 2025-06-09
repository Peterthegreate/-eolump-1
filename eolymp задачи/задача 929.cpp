#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c and b == d or a == b and c == d or a == d and b == c ){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
