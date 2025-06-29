#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if(N > 99 and N < 1000 or N > -1000 and N < -99){
        cout << "Ok" << endl;
    } else {
        cout << "No" << endl;
    }
}
