#include <iostream>
using namespace std;
int main()
{
    int a, b, c, min;
    cin >> a >> b >> c;
    if(a == b || a == c){
        min = a;
    }
    else if(b < a and b < c){
        min = b;
    } else if(c < a and c < b){
        min = c;
    } else if (a < b and a < c){
        min = a;
    }
    cout << min << endl;
}
