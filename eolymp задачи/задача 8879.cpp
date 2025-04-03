#include <iostream>
using namespace std;
int main()
{
    int a, b, c, N;
    cin >> a >> b >> c;
    if (a+b>c and a+c>b and b+c>a){
        N = a + b + c;
        cout << N << endl;
    } else {
        cout << "No" << endl;
    }
}
