#include <iostream>
using namespace std;              

int main()
{
    int U;
    U = 0;
    int N;
    cin >> N;
    while (N >= 500) {
        U = U + 1;
        N = N - 500;
    }
    
    while (N >= 200) {
        U = U + 1;
        N = N - 200;
    }
    
    while (N >= 100) {
        U = U + 1;
        N = N - 100;
    }
    
    while (N >= 50) {
        U = U + 1;
        N = N - 50;
    }
    
    while (N >= 20) {
        U = U + 1;
        N = N - 20;
    }
    while (N >= 10) {
        U = U + 1;
        N = N - 10;
    }
    while (N >= 5) {
        U = U + 1;
        N = N - 5;
    }
    while (N >= 2) {
        U = U + 1;
        N = N - 2;
    }
    while (N >= 1) {
        U = U + 1;
        N = N - 1;
    }

    cout << U << endl;
    
    return 0;
    

}
