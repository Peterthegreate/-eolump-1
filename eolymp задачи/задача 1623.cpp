#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a % 2 == 0 and b % 2 == 0 and c % 2 == 0 or a % 2 != 0 and b % 2 != 0 and c % 2 != 0){
        cout <<"NO"<< endl;
    } else {
        cout <<"YES"<< endl;
    }
}
