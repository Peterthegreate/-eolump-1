#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, S, V;
    cin >> a >> b >> c;
    S = 2 * (a * b + b * c + a * c);
    V = a * b * c;
    cout << S << " " << V << endl;
}
