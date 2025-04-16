#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int k = N / 24;
    int peter = 13 * k;
    int vasya = 4 * k;
    int nikolay = 7 * k;

    cout << peter << " " << vasya << " " << nikolay << endl;
    return 0;
}
