#include <iostream>
using namespace std;
int main()
{
    double x;
    cin >> x;
    if(x < 0){
        cout << "-1" << endl;;
    } else if(x == 0){
        cout << "0" << endl;
    } else if(x > 0){
        cout << "1" << endl;
    }
}
