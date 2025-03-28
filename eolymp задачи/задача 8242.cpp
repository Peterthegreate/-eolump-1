#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    if (a == 0){
        cout <<"Zero"<<endl;
    } else if (a < 0){
        cout <<"Negative"<<endl;
    } else if (a > 0){
        cout <<"Positive"<<endl;
    }
}
