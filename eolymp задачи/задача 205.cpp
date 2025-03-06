#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == b and a == c){
        cout <<"1"<< endl;
    }
    else if (a == b || a == c || b == c){
        cout <<"2"<< endl;
    }
    else if (a != b and a != c and b != c){
        cout <<"3"<< endl;
    }
}
