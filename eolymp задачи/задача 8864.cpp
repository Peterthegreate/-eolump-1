#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > 0 and b > 0 or a < 0 and b < 0){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}
