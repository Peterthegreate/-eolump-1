#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    
    b = a % 10;
    
    while (a >= 10) {
        a /=10; // Делим число на 10, пока не останется первая цифра
    }
    
    c = a + b;
    
    cout << c << endl;
}
