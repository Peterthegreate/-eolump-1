#include <iostream>
using namespace std;
int main()
{
    int N, a, b, c;
    cin >> N;
    if(N < 3){
        cout << N << endl;
        return 0;
    }
    a = N - 1;
    b = N - 2;
    c = N * a * b;
    cout << c << endl;
}
