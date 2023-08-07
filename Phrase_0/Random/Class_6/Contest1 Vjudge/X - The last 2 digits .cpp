#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int  a , b , c, d;
    cin >> a >> b >> c >> d;

    a %= 100 ;
    b %= 100 ;
    c %= 100 ;
    d %= 100 ;

     int multi = a * b * c * d;

     int sum = multi % 100 ;

     if (sum < 10 ) {
        cout << 0 << sum << endl ;
     }
     else {
             cout << sum << endl ;

     }

}
