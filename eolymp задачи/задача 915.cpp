#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max, min1, min2;
    cin >> a >> b >> c;
    
    if (a > b and a > c)
    {
        max = a;
        min1 = c;
        min2 = b;
    }
    
    else if (b > a and b > c)
    {
        max = b;
        min1 = a;
        min2 = c;
    }
    
    else if (c > a and c > b)
    {
        max = c;
        min1 = a;
        min2 = b;
    }
    if (max * max == min1 * min1 + min2 * min2)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
