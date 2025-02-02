#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, MAX;
    
    cin >> a >> b >> c >> d;
    
    MAX = a;
    
    
    if (b > MAX)
    {
        MAX = b;
    }
    
    
    if (c > MAX) 
    {
        MAX = c;
    }
    
    if (d > MAX)
    {
        MAX = d;
    }
    cout << MAX << endl;
}
