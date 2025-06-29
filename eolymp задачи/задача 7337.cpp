#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, max, min0, min00;
    cin >> a >> b >> c;
    if(a > b and a > c){
        max = a;
        min0 = b;
        min00 = c;
    } else if(b > a and b > c){
        max = b;
        min0 = a;
        min00 = c;
    } else{
        max = c;
        min0 = b;
        min00 = a;
    }
    if(max + min0 > max + min00){
        d = max + min00;
        cout << d << endl;
    } else{
        d = max + min0;
        cout << d << endl;
    }
}
