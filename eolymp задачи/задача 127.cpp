#include <iostream>
using namespace std;
int main()
{
    long long kapital, banka, age, A, podarok;
    kapital = 0;
    banka = 1;
    age = 1;
    podarok = 1;
    cin >> A;
    while(banka < A){
        age = age + 1;
        //kapital = podarok * 2 + age;
        podarok = podarok * 2 + age;
        banka = banka + podarok;
    }
    
    cout << age << endl;
}
