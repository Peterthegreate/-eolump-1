#include <iostream>
using namespace std;
int main()
{
    int A, a, c, b, M;
    cin >> A;
    a = A % 10; // последнее число
    b =  (A / 10) % 10; // пред последнее число
    c = A / 100; // первое число
    M = a * b * c;
    cout << M << endl;
}
