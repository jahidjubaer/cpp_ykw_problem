#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    float n ;
    cin >> n;

    int intger = (int) n  ;

    if ( n == intger ) {
        cout << "int " << n << endl ;
    }
    else {
            cout << "float " << intger << " " << n - intger << endl ;

    }
}
