#include<iostream>
using namespace std;

void f(int n) {
    if(n<=0) return;
    cout<<n<<")call function f()"<<endl;
    f(n-1);
}
void f2(int a, int n) {
    while(a<n) {a--;}
    f(n);
}

int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    f2(a, n);
    //f(n);
}
