#include <iostream>
using namespace std;
int main()
{
    int h1, m1, s1, h2, m2, s2;
    int h3, m3, s3;
    int M;
    0 <= h1 <= h2 <= 23, 0 <= m1, m2, s1, s2 <= 59;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    
    h1 = h1 * 3600; // перевод всего в сек
    h2 = h2 * 3600;
    m1 = m1 * 60;
    m2 = m2 * 60;
    
    h3 = h2 - h1;
    m3 = m2 - m1;
    s3 = s2 - s1;
    
    M = h3 + m3 + s3;

    int h33, m33, s33;
    h33 = 0;
    m33 = 0;
    s33 = 0;
    
   //a3 = M / 3600;
   //M = M - a3;
   //b3 = M / 60;
   //M = M - b3;
   //c3 = M;
    if(M > 3600 or M == 3600){
       while(M > 3600 or M == 3600){
            M = M - 3600;
            h33 = h33 + 1;
       }
    } if(M > 60 or M == 60){
        while(M > 60 or M == 60){
            M = M - 60;
            m33 = m33 + 1;
        }
    } 
    s33 = M;
     cout << h33 << ' ' << m33 << ' ' << s33;
}
