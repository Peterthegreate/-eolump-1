#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    
    b = (a /100) % 10; // получаем вторую цыфру
    c = (a /10) % 10; // получаем предпоследнюю цыфру
    
    if(b == 0)
    {
        cout << c << endl;
    }
    else
    {
        cout << b << c << endl;
    }
}
