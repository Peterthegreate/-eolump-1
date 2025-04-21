#include <iostream>
using namespace std;
int main()
{
    int griven, kop, n;
    cin >> griven >> kop >> n;
    griven = griven * n;
    kop = kop * n;
    if(kop > 100){
        griven = griven + kop / 100;
        kop = kop % 100;
    }
    cout << griven << " " << kop << endl;
   
}
