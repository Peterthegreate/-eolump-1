#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    long long int f=2;
    int i=2;
    if(N<1) f = 1;
    else{
        while(i<=N)
        {
            f = f + 2*(i-1);
            i++;
        }
    }
    cout << f <<endl;
}
