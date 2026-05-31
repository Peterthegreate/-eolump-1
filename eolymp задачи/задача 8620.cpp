#include<iostream>
using namespace std;

int main() {
    char b[4] = {'0','0','0','0'};
    int m[10] = {0};
    for(int i=0; i<4; i++){
        cin>>b[i];
        m[b[i]-'0']++;
    }
    for(int i=0; i<10; i++){
        if(m[i]==3){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

}
