#include <iostream>
#include<string>
using namespace std;

int main() {
    string a;
    char b[5];
    for(int i=0; i<5; i++){
        cin>>b[i];
    }
    for(int i=1; i<5; i++){
        if(b[i-1]>b[i] || b[i-1]==b[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
