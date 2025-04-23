#include <iostream>
using namespace std;
int main()
{
    long long a, b, n;
    cin >> a;
    n = 0;
    if (a % 2== 0){
        a = a - 1;
        n = n + 1;
        while (a > 1){
            a = a - 2;
            n = n + 1;
        }
        cout << n << endl;
    } else {
        n = 1;
        while (a > 1){
            a = a - 2;
            n = n + 1;
        }
        cout << n << endl;
    }
}
