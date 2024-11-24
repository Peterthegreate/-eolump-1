#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 4, 3, 9, 2};
    
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    for (int i = 0; i < 5; i++) {
        
        
        for (int j = 0; j < 5; j++) {
            if(a[j]>a[j+1]){
               swap(a[j], a[j+1]);
            }
        }
    }
    
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
}
