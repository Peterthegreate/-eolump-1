#include <iostream>
using namespace std;
int main()
{
    int a, b, M;
    
    cin >> M;
    
    b = M % 10;
    a = M / 100;
    
    if (a > b)
    {
        cout << a << endl;
    }
    
    else if (b > a)
    {
        cout << b << endl;
    }
    
    else if (b == a)
    {
        cout << "=" << endl;
    }
    
    
}
