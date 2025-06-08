#include <iostream>
using namespace std;
int main()
{
    long long M, a, b, c;
    cin >> M;
    if(M < 0){
        M = M * -1;
    } 
    a = M / 100;
    b = (M / 10) % 10;
    c = M % 10;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
