#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int x ;
    cin >> x ;

    int sum = x / 1000 ;

    if (sum%2 == 0) {
        cout << "EVEN" << endl  ;
    }
    else {
        cout << "ODD" << endl ;
    }
    return 0 ;
}
