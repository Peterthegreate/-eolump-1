#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    
    cin >> a >> b >> c;
    
    if(a < b and a < c){
        cout << a << endl;
    }
    
    else if( b < a and b < c){
        cout << b << endl;
    }
    
    else if(c < a and c < b){
        cout << c << endl;
    }

}
