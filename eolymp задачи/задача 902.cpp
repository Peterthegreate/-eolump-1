#include <iostream>
using namespace std;
int main()
{
    int b;
    cin >> b;
    if (b == 1 || b == 2 || b == 3)
    {
        cout << "Initial" << endl;
    }
    else if (b == 4 || b == 5 || b == 6)
    {
        cout << "Average" << endl;
    }
    else if (b == 7 || b == 8 || b == 9)
    {
        cout << "Sufficient" << endl;
    }
    else if (b == 10 || b == 11 || b == 12)
    {
        cout << "High" << endl;
    }
}
