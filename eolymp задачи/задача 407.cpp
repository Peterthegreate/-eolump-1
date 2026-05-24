#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string names[3] = {"G", "C", "V"};
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        string names[3] = {"G", "C", "V"};
        for(int j = 0; j < a[i]; j++){
            swap(names[1], names[2]);
            swap(names[1], names[0]);
        }
        for(int d = 0; d < 3; d++){
            cout << names[d];
        }
        cout <<'\n';
    }
    return 0;
}
