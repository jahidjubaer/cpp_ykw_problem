#include <bits/stdc++.h>

using namespace std ;

int main ()

{
     long long int a , b ,c , d ;

    cin >> a >> b >> c >> d ;

     long long int cow = a * log (b) ;
     long long int  red = c * log(d) ;

    if (cow > red ) {
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }

}
