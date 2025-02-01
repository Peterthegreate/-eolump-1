#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    cin >> a;
    cin >> b;
    
    if (a > b)
    {
        cout << b << ' ' << a;
    }
    else
    {
        cout << a << ' ' << b << endl;
    }
    
}
