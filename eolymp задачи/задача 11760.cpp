#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    if(a % 2 == 0){
        b = a * a;
        cout << b << endl;
    } else {
        b = a * a * a;
        cout << b << endl;
    }
}
